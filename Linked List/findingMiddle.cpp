#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node*next;
Node(int data){
    this->data=data;
    next=nullptr;
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

Node* findMiddle(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

int main(){
    Node* Head = new Node(1);
    Head->next = new Node(2);
    Head->next->next = new Node(3);
    Head->next->next->next = new Node(4);
    Head->next->next->next->next = new Node(5);

    Head->printList(Head);
    Node* mid = findMiddle(Head);
    cout << "Middle element: " << mid->data << endl;
}