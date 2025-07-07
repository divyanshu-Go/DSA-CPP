#include <iostream>
using namespace std;

class CircularQueue {
    int *arr;
    int size;
    int front, rear;

public:
    CircularQueue(int k) {
        size = k;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return (rear + 1) % size == front;
    }

    bool enqueue(int value) {
        if (isFull()) return false;

        if (isEmpty()) front = 0;

        rear = (rear + 1) % size;
        arr[rear] = value;
        return true;
    }

    bool dequeue() {
        if (isEmpty()) return false;

        if (front == rear) {
            // only one element
            front = rear = -1;
        } else {
            front = (front + 1) % size;
        }

        return true;
    }

    int Front() {
        if (isEmpty()) return -1;
        return arr[front];
    }

    int Rear() {
        if (isEmpty()) return -1;
        return arr[rear];
    }
};




int main() {
    CircularQueue q(5);  // size 5

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);

    cout << "Front: " << q.Front() << endl;  // 10
    cout << "Rear: " << q.Rear() << endl;    // 40

    q.dequeue();
    q.enqueue(50);

    cout << "Front: " << q.Front() << endl;  // 20
    cout << "Rear: " << q.Rear() << endl;    // 50
}
