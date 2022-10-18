//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	public:
	vector<int> downwardDigonal(int N, vector<vector<int>> A)
	{
	    int n=A.size();
	    // Corner Case
		vector<int>ans;
		for(int i=0;i<n;i++){
		    int l=0;
		    int r=i;
		    while(r>=0 && l<n){
		        ans.push_back(A[l][r]);
		        l++;
		        r--;
		    }
		}
		for(int i=1;i<n;i++){
		    int l=i;
		    int r=n-1;
		    while(l<n && r>=0){
		        ans.push_back(A[l][r]);
		        r--;
		        l++;
		    }
		}
		return ans;
	}

};

//{ Driver Code Starts.



int main()
{

    
    int t;
    cin >> t;
    while(t--) 
    {
        int n;
        cin >> n;

        vector<vector<int>> A(n, vector<int>(n));

        for(int i = 0; i < n; i++)
        	for(int j = 0; j < n; j++)
        		cin >> A[i][j];

        Solution obj;
        vector<int> ans = obj.downwardDigonal(n, A);

        for(auto i:ans)
        	cout << i << " ";

	    cout << "\n";
    }

    return 0;
}

// } Driver Code Ends