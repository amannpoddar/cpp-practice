#include<iostream>
using namespace std;

//Creation of class in LL
class Node{
public:
    int data;
    Node* next;

Node(int data){  //creating constructor
    this -> data = data;
    this -> next = NULL;
}
};

void insertAtBegin(Node* &head, int d){
    //new node create
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}
void insertAtEnd(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void insertAtMiddle(Node* &head, int pos, int d){
    Node* temp = head;
    int cnt=1;

    while(cnt < pos-1){
        temp = temp-> next;
        cnt++;
    }
}

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main(){
    Node* node1 = new Node(10);   //Creating new node
    //adding head = tail by giving same address of node1
    Node* tail = node1;
    Node* head = node1;

    print(head);
    print(tail);

    insertAtBegin(head, 12);
    insertAtEnd(tail,25);
    print(head);


    return 0;
}