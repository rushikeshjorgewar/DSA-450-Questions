#include<iostream>
#include<stack> 
using namespace std;

void solve(stack<int> &st,int num){

    if(st.empty() || (!st.empty() && st.top() < num)){
        st.push(num);    
        return;       
    }
 
    int num1 = st.top();
    st.pop();
    
    solve(st,num);

    st.push(num1);    


}
void sortStack(stack<int> &st){
     
     if(st.empty()){
         return;
     }

     int num = st.top();
     st.pop();

     sortStack(st);

     solve(st,num);

}
int main(){

    stack<int> st;

    st.push(-3);
    st.push(2);
    st.push(-70);
    st.push(4);
    st.push(1);

    sortStack(st);

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