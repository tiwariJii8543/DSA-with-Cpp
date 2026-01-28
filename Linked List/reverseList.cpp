#include<iostream>
#include<vector>
using namespace std;

class Node{
public:
    Node*Head=NULL;
    int data;
    Node*next=nullptr;

Node(int val){
    data=val;
    next=nullptr;
}
static Node*takeINput(){
    int val;
    cout<<"enter the inputs in linked list (-1 to stop): "<<endl;
    cin>>val;
    Node* Head = nullptr;
    Node* tail = nullptr;
    while (val != -1) {
        Node* newNode = new Node(val);
        if(Head == nullptr) {
            Head = newNode;
            tail = newNode;
        }else{
            tail->next = newNode; // Link the old tail to the new node
            tail = newNode;       // Move tail to the new end
        }
        cin >> val;
    }
    return Head;
}
void printList(Node*Head){
    Node*temp=Head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
void reverse(Node*&Head){
    Node*prev=NULL;
    Node*curr=Head;
    Node*next=NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    Head=prev;
}
};
int main(){
    Node*Head=Node::takeINput();
    Head->printList(Head);
    Head->reverse(Head);
    Head->printList(Head);
}