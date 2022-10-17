//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++

class Solution{
    public:
    vector<int> findLeastGreater(vector<int>& arr, int n) {
        
        // using Order set here
        set<int>st;
        // Result
        vector<int>res(n);
        for(int i=n-1;i>=0;i--){
            // Iterator 
            auto it=st.upper_bound(arr[i]);
             // least greater element it is present or not
             if(it==st.end()){
                  res[i]=-1;
             }
             else{
                 res[i]=*it;
             }
             st.insert(arr[i]);
        }
        return res;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    vector<int>arr(n);
	    for(int i = 0 ; i < n; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findLeastGreater(arr, n);
	    for(auto it : ans){
	        cout << it << " ";
	    }
	    cout <<endl;
	}
	return 0;
}

// } Driver Code Ends