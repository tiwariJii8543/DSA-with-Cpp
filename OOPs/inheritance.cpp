#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int age;
};
class Section:public Student{
    int roll_num;
    public:
    Section(string name,int age,int roll_num){
        this->name=name;
        this->age=age;
        this->roll_num=roll_num;
    }

    void display(){
        cout<<"Details of student are as follows:\n";
        cout<<"Name: "<<name<<"\nAge: "<<age<<"\nRoll Number: "<<roll_num<<endl;
    }
};
int main(){
    Section A1("Harsh",20,101);
    A1.display();
}