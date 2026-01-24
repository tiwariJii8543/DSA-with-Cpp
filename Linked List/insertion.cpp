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
// traversal of linked list..... 
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
    int arr[100]={1,2,3,4,5};
    Node*Head=NULL;
    for(int i=0;i<5;i++){
        // insert at beginning.....
        if(Head==NULL){
            Head=new Node(arr[i]);
        }else{
            Node*temp;
            temp=new Node(arr[i]);
            temp->next=Head;
            Head=temp;
        }
    }
    Head->printList(Head);
}