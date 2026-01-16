#include<iostream>
using namespace std;

class Employee{
    private:
    string name;
    float salary;
    public:
    int ID;
    // setter func
    void setname(string s){
        name=s;
    }
    void setsalary(float x){
        salary=x;
    }
    // getter func
    void getname(){
        cout<<name<<endl;
    }
    void getsalary(){
        cout<<salary<<endl;
    }
};
int main(){
    Employee P1;
    P1.ID=001;
    P1.setname("Harsh");
    P1.setsalary(15000);
    cout<<P1.ID<<endl;
    P1.getname();
    P1.getsalary();
}