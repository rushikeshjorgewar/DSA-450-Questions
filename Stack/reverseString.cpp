#include<iostream>
#include<stack>
using namespace std;


int main(){

    string name = "india";
    stack<char> s;

    cout << name << endl;

    for(int i=0; i<name.length(); i++){
        char ch = name[i];
        s.push(ch);
    }    

    string ans = "";

    while(!s.empty()){
        char ch = s.top();
        ans.push_back(ch);
        s.pop();
    }

    cout << ans << endl;


    return 0;
}