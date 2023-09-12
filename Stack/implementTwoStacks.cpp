#include<iostream>
using namespace std;

class twoStack{

    public:
    int size;
    int top1;
    int top2;
    int *arr;

    twoStack(int size){
        this->size = size;
        int top1 = -1;
        int top2 = size;   
        arr = new int[size];
    }

    void push1(int num){
        
        if(top2 - top1 > 1){
            top1++;
            arr[top1] = num;
        }
        else{
            cout << "stack overflow" << endl;
        }
    
    }

    void push2(int num){

        if(top2 - top1 > 1){
            top2--;
            arr[top2] = num;
        }
        else{
            cout << "stack overflow" << endl;
        }
    }

    int pop1(){
        
        if(top1 >= 0){
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else{
            return -1;   
        }
    }
    
    int pop2(){
        
        if(top2 < size){
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else{
            return -1;
        }
    }
    
    int peek1(){
        return arr[top1];    
    }
    
    int peek2(){
        return arr[top2]; 
    }

    bool empty1(){

        if(top1 == -1){
            return 1;
        }
        else{
            return 0;
        }
    }
    
    bool empty2(){

        if(top2 == -1){
            return 1;
        }
        else{
            return 0;
        }
    }

};

int main(){

    twoStack st(6);

    // st.push1(10);
    // st.push1(20);
    // st.push1(30);

    // cout << st.peek1() << endl;

    st.push2(60);
    st.push2(50);
    st.push2(40);

    cout << st.peek2() << endl;

    return 0;
}