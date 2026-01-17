#include<iostream>
using namespace std;

class Customer{
    string name;
    int acc_num;
    int bal;
public:
    // default constructor
    Customer(){
        cout<<"Constructor called..."<<endl;   
    }
    // parameterized constructor
    Customer(string a,int b,int c){
        name=a; 
        acc_num = b; 
        bal=c;
    }
    void display(){
        cout<<name<<" "<<acc_num<<" "<<bal<<endl;
    }
};
int main(){
    Customer A1("Harsh",101,1000);
    A1.display();
}