#include<iostream>
#include<string>
using namespace std;

void reverseString(string &str,int s,int e){

    if(s>e)
        return ;

    swap(str[s],str[e]);
    s++;
    e--;
    
    reverseString(str,s,e);
}

int main(){

    string s = "love";
    cout << s << endl;

    reverseString(s,0,3);
    cout << s << endl;

    return 0;
}