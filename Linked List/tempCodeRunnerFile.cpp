#include<iostream>
using namespace std;
// deleting Node from the end of the Linked List.....

class Node{
public:
    Node*Head=NULL;
    int data;
    Node*next=nullptr;
Node(int val){
    this->data=val;
    this->next=next;
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
    if(Head==NULL){
        cout<<"Node not available to delete."<<endl;
        return Head;
    }
    if(Head->next==NULL){
        delete Head;
    }else{
        temp=temp->next;
        while (temp->next->next = nullptr) {
            delete temp->next;
            temp->next=NULL;
        }

    }
// temp->next is the last node
    // delete temp->next; 
    // temp->next = nullptr; // This is the crucial step!
        // }
    return Head;
}
int main(){
    Node*Head=Node::takeINput();
    Head->printList(Head);
    Head=DeleteNode(Head);
    Head->printList(Head);

}
