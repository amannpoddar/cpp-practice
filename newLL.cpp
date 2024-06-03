// Program to calculate and save student's cgpa in one list.

#include<iostream>
using namespace std;

class Node {
public:
    string name;
    int subjectSize;
    int *marks;
    Node* next;
    Node() {
        this->marks = NULL;
        this->name = "";
        this->subjectSize = 0;
    }
    Node(string name) {
        int size;
        cout << "Enter number of subjects: "; cin >> size;
        marks = new int[size];
        this->name = name;
        this->subjectSize = size;
    }
    void create(Node* &head, int noofstu) {
        string name;
        while(noofstu--)
        {
            cout << "Enter name of student: ";
            cin >> name;
            for(int i = 0; i < subjectSize; i++) {
                cin >> marks[i];
            }
            Node* newnode = new Node(name);
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