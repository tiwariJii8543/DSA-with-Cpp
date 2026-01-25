// creating linked list using recursion, adding elements at beggining.....
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
void printList(){
    Node*Temp=this;
    while(Temp!=NULL){
        cout<<Temp->data<<"->";
        Temp=Temp->next;
    }
    cout<<"NULL";

}
};
Node *insertAtStart(int arr[],int idx,int size,Node*prev){
    if(idx==size){
        return prev;
    }
    Node*temp=new Node(arr[idx]);
    temp->next=prev;
    return insertAtStart(arr,idx+1,size,temp);
}
int main(){
    Node*Head;
    int arr[100]={1,2,3,4,5};
    int size=5;
    Head=insertAtStart(arr,0,size,NULL);
    if (Head != NULL) {
        Head->printList();
    } else {
        cout << "List is empty!" << endl;
    }
}