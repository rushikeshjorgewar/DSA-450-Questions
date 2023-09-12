#include<iostream>
using namespace std;

// queue - implement queue class from scratch.
// time complexity - O(1);
// space complexity - O(1);

class Queue{
    public:
    int qFront;
    int rear;
    int* arr;
    int size;

    Queue(int size){
        this->size = size;
        arr = new int[size];
        qFront = 0;
        rear = 0;
    }

    void push(int element){

        if(rear == size){
            cout << "queue is full " << endl;
        }
        else{
            arr[rear] = element;
            rear++;
        }

    }

    int pop(){
        int ans ;
        if(rear == qFront){
            cout << "queue is empty" << endl;
        }
        else{
            ans = arr[qFront];
            qFront++;
        }
        return ans;
    }

    int front(){
        int ans ;
        if(rear > qFront){
            ans = arr[qFront];
        }
        else{
            cout << "queue is empty" << endl;
        }
        return ans;
    }

    bool isEmpty(){

        if(rear == qFront){
            return true;
        }
        else
            return false;
    }

};
int main(){

    Queue   q(5);

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    cout << q.front() << endl;

    bool result = q.isEmpty();
    if(result){
        cout << "true" << endl;
    }
    else
        cout << "false" << endl;

    
     return 0;
}