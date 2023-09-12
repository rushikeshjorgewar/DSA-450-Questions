#include<iostream>
#include<queue>
#include<vector>
using namespace std;

void firstNegativeInteger(int arr[],int size,int k){

    vector<int> ans;
    deque<int> q;
    // -8 2 3 -6 0
    // for k elements.

    for(int i=0; i<k; i++){
        if(arr[i] < 0){
            q.push_back(arr[i]);
        }
    }

    if(q.size() > 0){
        ans.push_back(q.front());
    }
    else{
        ans.push_back(0);
    }
    
    for(int i=k; i<size; i++){
        
        if(!q.empty() && i - q.front() >= k){
            q.pop_front();
        }

        if(arr[i] < 0){
            q.push_back(arr[i]);
        }
        else{
            
        }

        if(q.size() > 0){
            ans.push_back(q.front());
        }   
        else{
            ans.push_back(0);
        }

    }

    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << endl;
    }

}
int main(){
    
    int a[5] = {-8,2,3,-6,10};
    int k;
    cin >> k;

    firstNegativeInteger(a,5,k);
    

    return 0;
}

