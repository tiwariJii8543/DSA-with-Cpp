// insertion at end of Linked List.....
#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node*next;

Node(int data){
    this->data=data;
    this->next=nullptr;
    }
};
int main(){
    Node*Head=NULL;
    Node*Tail=NULL;
    int arr[100]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        if(Head==NULL){
            Head=new Node(arr[i]);
            Tail=Head;
        }
        else{
            Tail->next=new Node(arr[i]);
            Tail=Tail->next;
        }
    }
    Node*Temp=Head;
    while(Temp!=NULL){
        cout<<Temp->data<<"->";
        Temp=Temp->next;
    }

}