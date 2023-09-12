#include<iostream>
#include<string>
using namespace std;

	string FirstNonRepeating(string A){
		    
	    for(int i=0; i< A.length(); i++){
	        for(int j = i+1; j<A.length(); j++){
	            
	            if(A[i] == A[j]){
	                A[j] = '#';
	            }
	        }
	    }
		return A;
}

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		string ans = FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
