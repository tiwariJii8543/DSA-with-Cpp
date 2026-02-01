#include<iostream>
using namespace std;
// delete node from starting...
class Node{
public:
    int data;
    Node*next;
    Node*prev;
    
Node(int val){
    data=val;
    next=nullptr;
    prev=nullptr;
}
static Node*insertion(Node*Head, int val){
    Node*curr=Head;
    if(Head==NULL){
        Head=new Node(val);
        return Head;
    }else{
        while(curr->next!=NULL){
            curr=curr->next;
        }
        curr->next=new Node(val);
        curr->next->prev=curr;
    }
    return Head;
}
static void printList(Node* Head){
    Node* curr = Head;
    while(curr != nullptr){
        cout<<curr->data<<"->";
        curr = curr->next;
    }
    cout<<"NULL"<<endl;
} 
};
Node*DeleteNode(Node*Head){
    Node*curr=Head;
        if(Head==NULL){
            cout<<"Node not available to delete."<<endl;
            return Head;
        }else{
            Head=Head->next;
            Head->prev=NULL;
            delete curr;
        }
    return Head;
}
int main(){
    int val;
    Node* Head = nullptr;
    cout<<"Enter inputs (-1 to stop): ";
    cin>>val;
    while(val != -1){
        Head = Node::insertion(Head, val);
        cin>>val;
    }
    Node::printList(Head);
    Head=DeleteNode(Head);
    Node::printList(Head);
    return 0;
}


