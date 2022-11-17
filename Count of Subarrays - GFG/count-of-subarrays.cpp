//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

#define ll long long


// } Driver Code Ends
//User function template for C++
#define Rep(i,a,b) for(int i=a;i<b;i++)
class Solution{
public:
	// #define ll long long

	ll countSubarray(int arr[], int n, int k) {
	    ll ct=0;
	    Rep(i,0,n){
	        Rep(j,i,n){
	            if(arr[j]>k){
	                ct+=(n-j);
	                break;
	            }
	        }
	    }
	    return ct;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.countSubarray(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends