#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int>dll;    //create doubly link list using stl....
    // insert element....
    dll.push_back(5);
    dll.push_back(10);
    dll.push_back(15);
    dll.push_back(20);
    // insert element at beginning....
    dll.push_front(1);
    // traverse element from starting....
    for(auto it=dll.begin();it!=dll.end();it++){
        cout<<*it<<"->";
    }
    cout<<"NULL"<<endl;
    // traverse from last.....
    for(auto it=dll.rbegin();it!=dll.rend();it++){
        cout<<*it<<"->";
    }
    cout<<"NULL"<<endl;
    // delete element from last and starting.....
    dll.pop_back();
    dll.pop_front();
    for(auto it=dll.begin();it!=dll.end();it++){
        cout<<*it<<"->";
    }
    cout<<"NULL"<<endl;
}