#include<iostream>
using namespace std;

int main(){
    char arr[]={'a','b','c','d','\0'};
    char*ptr=arr;
    //printing address 
    for(int i=0;i<4;i++){
        cout<<(void*)ptr+i<<endl;  //to print char pointer address we have to use (void*)...
    }
    //printing value
    cout<<ptr;
}