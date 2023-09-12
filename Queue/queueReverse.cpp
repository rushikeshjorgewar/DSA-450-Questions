#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void queueReverse(queue<int> &q,int count){

    int qSize = q.size();

    if(count == qSize - 1){
        return;
    } 

    int num = q.front();
    q.pop();

    queueReverse(q,count++);
    q.push(num);

}

int main(){

    queue<int> q;

    q.push(5);
    q.push(10);
    q.push(2);
    q.push(8);
    q.push(4);

    int count = 0;

    queueReverse(q,count);

    cout << q.front() << endl;
    q.pop();
    
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