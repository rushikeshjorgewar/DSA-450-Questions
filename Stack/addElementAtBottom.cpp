#include<iostream>
#include<stack>
using namespace std;

// que - add element at the bottom.
// time complexity - O(n);
// space complexity - O(n);

void addElementAtBottom(stack<int> &st,int element){
    
    // base case
    if(st.empty()){
        st.push(element);
        return ;
    }
    
    int num;
    if(!st.empty()){
        num = st.top();
        st.pop();
    }

    // recursive call
    addElementAtBottom(st,element);
    st.push(num);
}
int main(){

    stack<int> st;
    int element;
    cin >> element;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    cout << "element before" << endl;
    cout << st.top() << endl;

    addElementAtBottom(st,element);
    
    cout << "element after" << endl;
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;

    return 0;
}