#include<iostream>
using namespace std;
// overriding works well with pointer approach......
class Animal{
    public:
    // virtual keyword used to make function unique.....
    virtual void makeSound(){
        cout<<"This is animal class...\n";
    }
};
class Cow : public Animal{
    public:
    void makeSound(){
        cout<<"This is class Cow...\n";
    }
};
class Dog : public Animal{
    public:
    void makeSound(){
        cout<<"This is class Dog...\n";
    }
};

int main(){
    Animal *A1=new Cow();
    Animal *A2=new Dog();
    A1->makeSound();
    A2->makeSound();
}

