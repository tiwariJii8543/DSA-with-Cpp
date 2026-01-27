#include<iostream>
using namespace std;
// deleting Node from the given position of the Linked List.....

class Node{
public:
    Node*Head=NULL;
    int data;
    Node*next=nullptr;
Node(int val){
    this->data=val;
    this->next=nullptr;
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
};

Node*DeleteNode(Node*Head){
    Node*temp=Head;
    int x;
    cout<<"Enter which node should be deleted: ";
    cin>>x;
    if(Head==NULL){
        cout<<"Node not available to delete."<<endl;
        return NULL;
    }
    // case 1: delete Head...
    if(x==1){
        temp=Head->next;
        delete Head;
        Head=temp;
        return Head;
    }
    // case 2: delete node from given position
    Node*prev=nullptr;
    Node*curr=Head;
    int count=1;
    while(curr!=NULL && count<x){
        prev=curr;
        curr=curr->next;
        count++;
    }
    if (curr == nullptr) {
        cout << "Position out of bounds." << endl;
        return Head;
    }
    prev->next = curr->next; // Bypass the node to be deleted
    delete curr;             // Free memory
    return Head;
}
int main(){
    Node*Head=Node::takeINput();
    Head->printList(Head);
    Head=DeleteNode(Head);
    Head->printList(Head);

}
