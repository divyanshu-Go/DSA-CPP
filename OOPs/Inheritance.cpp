#include <iostream>
#include <string>
using namespace std;


class Person{
private:

    string name;
    int age;

public:

    Person(string name, int age){
        this->name=name;
        this->age=age;
    }
    
    void display(){
        cout<<"Name: "<<name<<endl
        <<"Age: "<<age<<endl;
    }

};

class Employee : public Person {
private: 

    int salary;

public:

    Employee(string name, int age, int salary) : Person(name, age){
        this->salary =salary;
    }

    void display(){
        Person :: display();
        cout<<"Salary: "<<salary<<endl;
    }
};


int main(){

    cout<<"Working...\n"<<endl;

    Employee emp("divya", 23, 400000);
    emp.display();

    return 0;
}