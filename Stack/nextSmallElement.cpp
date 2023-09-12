#include<iostream>
#include<vector>
#include<stack>
using namespace std;

stack<int> findSmallElement(vector<int> &arr,int size){

    stack<int> s;

    for(int i=0; i<size; i++){
        int curr = arr[i];

        if(curr > arr[i+1]){
            for(int j=i+1; j<size; j++){
                int next = arr[j];

                if(curr >= next){
                    s.push(next);
                }
            }

        }   
        else{
            s.push(-1);
        }
    }
    s.push(-1);

    return s;

}

int main(){

    vector<int> arr;

    arr.push_back(3);
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(1);

    stack<int> s = findSmallElement(arr,4);

    cout << s.top() << endl;
    s.pop();
    
    cout << s.top() << endl;
    s.pop();
    
    cout << s.top() << endl;
    s.pop();
    
    cout << s.top() << endl;
    s.pop();
    

    return 0;
}