#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) : data(val), next(NULL), prev(NULL) {}
};

class DoublyList
{
    Node *head;
    Node *tail;

public:
    DoublyList()
    {
        head = tail = NULL;
    }

    void display()
    {
        if (head == NULL)
        {
            cout << "Empty List" << endl;
            return;
        }

        Node *temp = head;

        cout << "NULL <-- ";
        while (temp != NULL)
        { // Iterate until temp is NULL
            cout << temp->data;
            if (temp->next != NULL)
                cout << " <==> ";
            temp = temp->next;
        }
        cout << " --> NULL" << endl;
    }

    void push_front(int val)
    {
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void push_back(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        else
        {
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop_front()
    {
        if (head == NULL)
        {
            cout << "Empty List" << endl;
            return;
        }
        Node *temp = head;
        head = head->next;
        if (head != NULL)
        {
            head->prev = NULL;
        }
        else
        {
            tail = NULL;
        }
        temp->next = NULL;

        delete temp;
    }

    void pop_back()
    {
        if (head == NULL)
        {
            cout << "Empty List" << endl;
            return;
        }

        Node *temp = tail;
        if (head == tail)
        { // Only one node in the list
            head = tail = NULL;
        }
        else
        {
            tail = tail->prev;
            tail->next = NULL;
        }
        delete temp;
    }
};

int main()
{
    DoublyList dll;

    dll.push_front(10);
    dll.push_front(20);
    dll.push_front(30);
    dll.push_front(40);
    dll.push_back(50);
    dll.push_back(60);
    dll.pop_front();
    dll.pop_back();
    dll.pop_back();

    dll.display();

    return 0;
}