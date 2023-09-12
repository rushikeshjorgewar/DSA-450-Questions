#include<iostream>
using namespace std;

void reverseString(string &name,int s,int e){

    if(s>=e){
        return ;
    }

    swap(name[s],name[e]);
    s++;
    e--;

    reverseString(name,s,e);

}
int main(){

    string name = "Love";
    int size = name.size();

    cout << name << endl;

    reverseString(name,0,size-1);
    
    cout << name << endl;

    return 0;
}