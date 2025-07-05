#include<iostream>
#include<vector>
#include<list>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val) {
        data= val;
        next = NULL;
    }

};

class Queue{
    Node* head;
    Node* tail;
public:

    Queue(){
        head = tail = NULL;
    }

    void push(int val){
            Node* newNode = new Node(val);
            if(head == NULL){
                head = tail = newNode;

            }else{
                tail->next = newNode;
                tail = newNode;
            }
    }

    void pop(){
        if(head == NULL){
            cout << "Queue is empty" << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
        if(head == NULL){
            tail = NULL;
        }
    }

    int front(){
        if(head == NULL){
            cout << "Queue is empty" << endl;
            return -1;  // Meaningful value indicating empty queue
        }
        return head->data;
    }

    bool empty(){
        return head == NULL;
    } 
};


int main(){
    Queue q;

    q.push(10);
    q.push(20); 
    q.push(30);

    while(!q.empty()){
        cout << q.front() << ",";
        q.pop();
    }
    cout << endl;
    return 0;
}