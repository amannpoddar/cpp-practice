//Program to calculate and save student's CGPA in one way list

#include<iostream>
using namespace std;

class Node{
public:
    int cgpa;
    Node* next;

Node(int data){
    this -> cgpa = cgpa;
    this -> next = NULL;
}
void insertAtEnd(Node* head, Node* &tail, int cgpa){
    Node* temp = new Node(cgpa);
    if(tail == NULL){
        head = tail = temp;
    }else{
    tail -> next = temp;
    tail = temp;
    }
}

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->cgpa << " ";
        temp = temp->next;
    }
    cout << endl;
}
};

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    
    return 0;
}