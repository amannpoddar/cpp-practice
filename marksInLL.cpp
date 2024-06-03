// Program to calculate and save student's cgpa in one list.

#include<iostream>
using namespace std;

class Node {
public:
    string name;
    int mark1, mark2;
    Node* next;
    Node() {
        this->mark1 = 0;
        this->mark2 = 0;
        this->name = "";
    }
    Node(string name, int mark1, int mark2) {
        this->mark1 = mark1;
        this->mark2 = mark2;
        this->name = name;
    }
    void create(Node* &head, int noofstu) {
        string name;
        int m1, m2;
        while(noofstu--)
        {
            cout << "Enter name of student: ";
            cin >> name;
            cout << "Enter mark1: ";
            cin >> m1;
            cout << "Enter mark2: ";
            cin >> m2;
            Node* newnode = new Node(name, m1, m2);
            if(head == NULL) {
                head = newnode;
            }
            else {
                newnode->next = head;
                head = newnode;
            }
        }
    }
    void display(int noofstu, Node* head)
    {
        cout  << "Displaying list: " << endl;
        for(int i = 0; i < noofstu; i++) {
            double perc = (head->mark1 + head->mark2)/2;
            double cgpa = perc / 9.5;
            cout << "Mark1: " << head->mark1 << endl;
            cout << "Mark1: " << head->mark2 << endl;
            cout << "Student name: " << head->name << ", CGPA: " << cgpa << endl;
            head = head->next;
        }
    }
}; 

int main(){
    int noofstu;
    Node* head = NULL;
    cout << "Enter number of students: ";
    cin >> noofstu;

    Node ll;
    ll.create(head, noofstu);
    ll.display(noofstu, head);

    return 0;
}