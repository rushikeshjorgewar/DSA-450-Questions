#include<iostream>
#include<stack>
using namespace std;

void deleteMid(stack<int> &st,int count, int size){

    // base case
    if(count == size/2){
        st.pop();
        return;
    }
    
    int num = st.top();
    st.pop();

    // recursive call
    deleteMid(st,size,count + 1);
    cout << "print" << endl;
        
    st.push(num);

}

int main(){

    stack<int> st;
    int count = 0;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);    

    int size = st.size();

    deleteMid(st, count, size );

    cout << st.top() << endl;
}

