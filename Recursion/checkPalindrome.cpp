#include<iostream>
#include<string>
using namespace std;

bool checkPalindrome(string &str,int s,int e){

    if(s>e)
        return 0;
    

    if(str[s] == str[e]){
        return 1;        
    }
    else{
        return 0;
    }
    checkPalindrome(str,s+1,e-1);

}

int main(){

    string s = "abba";
    int size = s.size();

    bool result = checkPalindrome(s,0,size - 1);
   
    if(result){
        cout << "palindrome" << endl;
    }
    else{
        cout << "not palindrome" << endl;
    }
   
    return 0;
}