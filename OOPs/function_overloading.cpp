#include<iostream>
using namespace std;

class Area{
    public:
    int length,breadth,radius;
    int ans;

    public:
    Area(int radius) {
        this->radius=radius;
        this->ans=(3.14*radius*radius);
    }
    Area(int length,int breadth){
        this->length=length;
        this->breadth=breadth;
        this->ans=(length*breadth);
    }

    void result(){
        cout<<"Answer is: "<<ans<<endl;
    }
};

int main(){
    Area A1(5);
    Area A2(5,6);
    A1.result();
    A2.result();
}