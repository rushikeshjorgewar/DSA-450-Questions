#include<iostream>
using namespace std;

class stack{
    public:
    int *arr;
    int top;
    int size;


    stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){

        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout << "stack overflow" << endl;
        }
    }

    void pop(){
    
        if(top >= 0){
            top--;
        }
        else{
            cout << "stack underflow" << endl;
        }

    }

    int peek(){
        
        return arr[top];

    }

    bool empty(){
 
        if(top == -1){
            return 1;
        }
        else{
            return 0;
        }
 
    }
};
int main(){

    stack st(3);

    st.push(10);   
    st.push(20);   
    st.push(30);   

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    if(st.empty()){
        cout << "stack empty";
    }
    else{
        cout << "not empty";
    }

    return 0;
}