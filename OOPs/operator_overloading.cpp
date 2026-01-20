#include<iostream>
using namespace std;

class Complex{
    public:
    int real,image;
        Complex(int r,int i){
            real=r;
            image=i;
        }
        Complex operator+(Complex c){
            return Complex(real + c.real, image + c.image);
        }
};
int main(){
    Complex C1(3,5);
    Complex C2(4,2);
    Complex C4(1,2);
    Complex C3=C1+C2+C4;
    cout<<C3.real<<"+i"<<C3.image<<endl;
}