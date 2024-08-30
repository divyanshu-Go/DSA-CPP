#include <iostream>
#include <string>
using namespace std;



class Student{
private:

    string name;
    int age;
    float grade;
    int q=1;

public:
    int w=2;
    Student(){}

    Student(string name, int age, float grade){
        this->name=name;
        this->age=age;
        this->grade=grade;
    }

    void display(){
        cout<<"inside display..."<<endl
        <<"Student Name: "<<name<<endl
        <<"His Age: "<<age<<endl
        <<"His Grade: "<<grade<<endl;

    }
    void setName(string name){
        this->name=name;
    }
    void setAge(int age){
        this->age=age;
    }
    void setGrade(float grade){
        this->grade=grade;
    }
};



int main(){
    cout <<"working..."<<endl;
    
    string name;
    int age;
    float grade;

    cout<<"Enter Name: \n";
    getline(cin, name);
    cout<<"Enter Age: \n";
    cin>>age;
    cout<<"Enter Grade: \n";
    cin>>grade;

    Student st(name, age, grade);
    st.display();
    st.setName("Shivam Shingh");
    st.display();

    return 0;
}