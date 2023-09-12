#include<iostream>
#include<stack>
using namespace std;

bool isRedundantBracket(string brackets)
{

    stack<char> st;

    for (int i = 0; i < brackets.length(); i++)
    {

        char ch = brackets[i];

        if (ch == '(' || ch == '+' || ch == '-' || ch == '/' || ch == '%')
        {
            st.push(ch);
        }
        else
        {

            if (!st.empty())
            {
                if (ch == ')')
                {
                    bool isRedundant = true;
                    while (st.top() != '(')
                    {
                        char top = st.top();
                        if (top == '+' || top == '-' || top == '/' || top == '*')
                        {
                            isRedundant = false;
                        }
                        else
                        {
                            return true;
                        }
                    }
                    st.pop();
                }
        }
    }
    return true;
}
}
int main(){

    string brackets = "((a + b) + (a + b))";

    bool result = isRedundantBracket(brackets);

    if (result)
    {
        cout << "non redundant" << endl;
    }
    else
    {
        cout << "redundant" << endl;
    }
 
    return 0;
}