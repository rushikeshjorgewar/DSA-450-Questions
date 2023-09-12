#include<iostream>
#include<stack> 
using namespace std;

void reverseStack(stack<int> &st){

    if(st.empty())
        return ;

    int num;
    
    stack<int> s;
    while(!st.empty()){
        num = st.top();
        s.push(num);
        st.pop();
    }
    st = s;
    
}
int main(){

    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    reverseStack(st);

    cout << st.top() << endl;
    st.pop();

    cout << st.top() << endl;
    st.pop();
    
    cout << st.top() << endl;
    st.pop();
    
    cout << st.top() << endl;
    st.pop();

    return 0;
}