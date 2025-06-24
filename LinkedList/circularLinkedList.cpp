#include <iostream>
using namespace std;

class Node{
public:
        int data;
        Node* next;

        Node(int val) : data(val) {}
};

class CircularList{
    Node* head;
    Node* tail;

public:
    CircularList(): head(NULL), tail(NULL) {}

    void insertAtHead(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head=tail=newNode;
            tail->next= head;
            return;
        } else {
            newNode->next = head;
            head=newNode;
            tail->next = head;
        }
    }


    void display(){
        if(head==NULL){
            cout<<"Empty List"<<endl;
            return;
        }

        Node* temp=head;

        cout<<"Head --> ";
        cout<<head->data<<" --> ";
        temp=temp->next;
        while(temp != tail->next){
            cout<<temp->data<<" --> ";
            temp=temp->next;
        }
        cout<<"Tail"<<endl;
    }


    void insertAtTail(int val){
        Node* newNode= new Node(val);
        if(head==NULL){
            head=tail=newNode;
            tail->next= head;
            return;
        } else {
            tail->next = newNode;
            tail=newNode;
            tail->next = head;
        }
    }

    void popHead(){
        if(head==NULL){
            cout<<"Empty List"<<endl;
            return;
        }

        Node* temp =head;
        if(head== tail){
            head=tail= NULL;
        }else{
            head=head->next;
            tail->next = head;
        }
        temp->next=NULL;
        delete temp;
    }

    void popTail(){
        if(head==NULL){
            cout<<"Empty List"<<endl;
            return;
        }else if(head==tail){
            delete head;
            head=tail=NULL;
        }else{
            Node* temp=tail;
            Node* pre=head;
            while(pre->next != tail){
                pre = pre->next;
            }
            tail=pre;
            tail->next= head;

            delete temp;
        }

    }

};

int main(){

    CircularList cll;

    cll.insertAtHead(10);
    cll.insertAtHead(20);
    cll.insertAtHead(30);
    cll.insertAtTail(40);
    cll.insertAtTail(50);
    cll.popHead();
    cll.popTail();

    cll.display();

    return 0;
}