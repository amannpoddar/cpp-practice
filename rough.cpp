#include<bits/stdc++.h>
using namespace std;

// class Node{
//      public:
//           int data;
//           Node* next;
     
//      Node(int data){
//           this -> data = data;
//           this -> next = NULL;
//      }

//      void insertAtHead(Node* &head,int d){
//           Node* temp = new Node(d);
//           temp -> next = head;
//           head = temp;
//      }
// };

// Node* node1 = new Node(10);

// cout << node1->data << endl;
// cout << node1->next << endl;
int main(){
    char ch;
    cin >> ch;

    if(ch>='A' && ch<='Z'){
     ch = ch+32;
     cout << ch;
    }
    else if(ch>='a' && ch<='z'){
     ch = ch-32;
      cout << ch << endl;
    }
     
    return 0;
}