#include<iostream>
#include<stack>
#include<queue>
using namespace std;

queue<int> modifyQueue(queue<int> &q, int k) {

    stack<int> s;
    int count = 0;

    while(count < k){
        int element = q.front();
        q.pop();
        s.push(element);
    }
    
    while(!s.empty()){
        int element = s.top();
        s.pop();
        q.push(element);
    }

    int t = q.size() - k;
    
    while(t--){
        int element = q.front();
        q.pop();
        q.push(element);
    }
    return q;

}

int main(){

    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    q = modifyQueue(q,3);

    cout << q.front() << endl;
    q.pop();

    cout << q.front() << endl;
    q.pop();
    
    cout << q.front() << endl;
    q.pop();
    
    cout << q.front() << endl;
    q.pop();
    

    return 0;
}