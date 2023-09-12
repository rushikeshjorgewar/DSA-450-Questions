#include<iostream>
#include<stack>
using namespace std;

// que - check if string is valid parenthesis.
// time complexity - O(n);
// space complexity - O(n);

bool validParenthesis(string symbols){

    stack<char> st;
    char ch;
    for(int i=0; i<symbols.length(); i++){
        ch = symbols[i];

        if(ch == '{' || ch == '(' || ch == '['){
                st.push(ch);
        }
        else{
                if(!st.empty()){
                    char top = st.top();

                    if((ch == '}' && top == '{') || ch == ')' && top == '(' ||    ch == ']' && top == '[' ){
                        st.pop();
                    }
                    else{
                        return false;
                    }

                }
                else{
                    return false;
                }
        }

    }

    if(st.empty())
        return true;
    else
        return false;

}
int main(){

    string symbols = "{}[]()";

    bool result = validParenthesis(symbols);

    if(result){
        cout << "valid parenthesis" << endl;
    }
    else{
        cout << "not valid parenthesis" << endl;
    }


    return 0;
}