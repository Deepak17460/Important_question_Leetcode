//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	public:
	vector<int> downwardDigonal(int N, vector<vector<int>> A)
	{ 
	        // Size of the Matrix
	        int n=A.size();
	      // Storing the result
	        vector<int>ans;
	      for(int i=0;i<n;i++){
	          int l=0;
	          int r=i;
	          while(l<n && r>=0){
              ans.push_back(A[l++][r--]);
	          }
	      }
	      //return ans;
	      for(int i=1;i<n;i++){
	          int l=i;
	          int r=n-1;
	          while(l<n && r>=0){
	              ans.push_back(A[l++][r--]);
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