//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	long long int NoOfChicks(int n){
	    #define ll long long int
	    ll arr[n+1];
	    ll pre=0;
	    arr[0]=0;
	    arr[1]=1;
	    ll sm=1;
	    for(int i=2;i<=n;i++){
	        // checking
	        if(i>=6) sm-=arr[pre++];
	        arr[i]=sm<<1;
	        sm+=arr[i];
	        }
	    return sm;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution obj;
		long long int ans = obj.NoOfChicks(N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends