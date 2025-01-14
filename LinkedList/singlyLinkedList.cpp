#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class List
{
    Node *head;
    Node *tail;

public:
    List()
    {
        head = tail = NULL;
    }

    void push_front(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop_front()
    {
        Node *temp = head;
        if (head == NULL)
        {
            cout << "List is Empty" << endl;
            return;
        }
        else if (head == tail)
        {
            head = tail = NULL;
        }
        else
        {
            head = head->next;
        }
        delete temp;
    }

    void pop_back()
    {
        Node *temp = head;
        if (head == NULL)
        {
            cout << "List is Empty" << endl;
            return;
        }
        else if (head == tail)
        {
            head = tail = NULL;
        }
        else
        {
            while (temp->next != tail)
            {
                temp = temp->next;
            }
            tail = temp;
            temp = temp->next;
            tail->next = NULL;
        }
        delete temp;
    }

    void insert(int data, int pos = 0)
    {
        if (pos < 0)
        {
            cout << "Invalid Position" << endl;
            return;
        }

        if (pos == 0)
        {
            push_front(data);
            return;
        }

        Node *temp = head;

        for (int i = 0; i < pos - 1; i++)
        {
            if (temp == NULL)
            {
                cout << "Invalid Position" << endl;
                return;
            }
            temp = temp->next;
        }

        Node *newNode = new Node(data);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void display()
    {
        if (head == NULL)
        {
            cout << "List is Empty" << endl;
            return;
        }
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " --> ";
            temp = temp->next;
        }
        cout << "NULL " << endl;
    }

    int search(int data)
    {

        Node *temp = head;
        int idx = 0;
        while (temp != NULL)
        {
            if (temp->data == data)
            {
                return idx;
            }
            temp = temp->next;
            idx++;
        }

        return -1;
    }
};

int main()
{
    List li;

    li.push_front(1);
    li.push_front(2);
    li.push_front(3);
    li.push_back(4);
    li.pop_back();
    li.pop_front();
    li.insert(5, 1);
    li.insert(6, 2);
    li.insert(10);
    cout<<li.search(10)<<endl;
    cout<<li.search(11)<<endl;

    li.display();
    return 0;
}