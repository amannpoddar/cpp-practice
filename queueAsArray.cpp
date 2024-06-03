#include<iostream>
using namespace std;

struct queue{
    int *arr;
    int front,rear,size;

    queue(){
        size = 100;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void enqueue(int data){
        if(rear == size){
            cout << "Queue is full." << endl;
        }
        else{
            if(front==-1){
                front++;
            }
            rear++;
            arr[rear] = data;
            cout << arr[rear] << " is inserted" << endl;
        }
    }

    int dequeue(){
        if(front == rear){
            cout << "Queue is empty" << endl;
            return -1;
        }
        else{
            int ele = arr[front];
            arr[front] = -1;
            front++;

            if(front == rear){
                front = 0;
                rear = 0;
            }
            return ele;
        }
    }

    int isEmpty(){
        if(front == rear){
            return true;
        }
        else{
            return false;
        }
    }

    int frontele(){
        if(front == rear){
            return -1;
        }
        else{
            return arr[front];
        }
    }

};
int main(){
    queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << q.dequeue() << " is Deleted" << endl;
    cout << q.dequeue() << " is Deleted" << endl;
    cout << q.dequeue() << " is Deleted" << endl;
    cout << q.dequeue() << " is Deleted" << endl;

    if(q.isEmpty() == 1){
        cout << "Queue is Empty" << endl;
    }
    else cout << "Queue is not Empty" << endl;
    q.enqueue(20);
    cout << "Front element of queue is: " << q.frontele() << endl;
    return 0;
}
