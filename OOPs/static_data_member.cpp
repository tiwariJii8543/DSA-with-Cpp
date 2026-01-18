#include<iostream>
using namespace std;

class Customer{
    string name;
    int id;
    static int total_customer;    //use of static keyword 

public:
    Customer(string name,int id){
        // use of his keyword to resolve naming conflicts...
        this->name=name;
        this->id=id;
        total_customer++;
    }
    void display(){
        cout<<"Customer id : "<<id<<endl;
        cout<<"Customer name : "<<name<<endl;
    }
    static void totalCustomer(){
        cout<<"Total Customer : "<<total_customer<<endl;
    }
};
int Customer::total_customer=0;  //initialize 
int main(){
    Customer::totalCustomer();
    Customer A1("Harsh",101);
    Customer A2("Utkarsh",102);
    A1.display();
    A2.display();
    Customer::totalCustomer();
}