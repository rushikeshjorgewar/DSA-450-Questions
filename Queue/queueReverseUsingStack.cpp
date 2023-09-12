#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void queueReverse(queue<int> &q){

    stack<int> s;

    while(!q.empty()){
        int element = q.front();
        q.pop();
        s.push(element);
    }

    while(!s.empty()){
        int element = s.top();
        s.pop();
        q.push(element);
    }

}
int main(){

    queue<int> q;

    q.push(5);
    q.push(10);
    q.push(2);
    q.push(8);
    q.push(15);

    queueReverse(q);

    cout << q.front() << endl;
    
    return 0;
}