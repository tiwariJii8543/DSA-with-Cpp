#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node*next;

    Node(int data){
    this->data = data;
    this->next = NULL;
    }
    void printList(Node* Head) {
        Node* temp = Head;
        while(temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
    cout << "NULL" << endl;
    }
};

int main(){
    // Node A1(5);          //static way of input...
    Node*Head;
    Head=new Node(5);
    // insert at beginning.....
    if(Head==NULL){
        Head=new Node(10);
    }else{
        Node*temp;
        temp=new Node(12);
        temp->next=Head;
        Head=temp;
    }
    Head->printList(Head);
}