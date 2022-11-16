//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
    int Helper(int arr[])
    {
        int mini =INT_MAX;
        for(int i=0;i<26;i++)
        {
            if(arr[i]!=0)//get minimum of only non-zero freq
            mini = min(mini,arr[i]);
        }
        return mini;
    }
  public:
    int beautySum(string s) {
        // Generate all substrings and while generating keep track of all the frequencies
        int res=0;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            int fre[26]={0};
            int mini=INT_MAX,maxi=INT_MIN;
            for(int j=i;j<n;j++)
            {
                fre[s[j]-'a']++;
                mini = Helper(fre);//get min of all freq
                maxi = max(maxi,fre[s[j]-'a']);//as we are increasing the freq for only current element
                // maxi will update reqpective of current element freq only
                res+= maxi-mini;
            }
        }
        return res;
        //T.C. O(N^2)
        //A.S. O(1) or O(26)
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.beautySum(s) << endl;
    }
    return 0;
}
// } Driver Code Ends