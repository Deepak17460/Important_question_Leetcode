#define ll long long
#define Rep(i,a,b) for(int i=a;i<b;i++)
class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
         ll n = arr.size();
        ll mod = 1e9 + 7;
        vector<ll>left(n), right(n);
        stack<int>st;
        st.push(0);
        left[0] = 1;
        Rep(i,1,n)
        {
            while(!st.empty() && arr[i] < arr[st.top()]) 
                st.pop();
            
            if(st.empty()) 
                left[i] = i+1; 
            else 
                left[i] = i - st.top();
            
            st.push(i);
            
        }
        
        while(st.size()) 
            st.pop();
        st.push(n-1);
        right[n-1] = 1;
        for(int i=n-2; i>=0; i--)
        {
            while(!st.empty() && arr[i] <= arr[st.top()]) 
                st.pop();
            
            if(st.empty()) 
                right[i] = n-i; // distance
            else 
                right[i] = st.top()-i;
            
            st.push(i);
        }
           
        int ans = 0;
        Rep(i,0,n)
        {
            ll p = (left[i]*right[i])%mod;
            p = (p*arr[i])%mod;
            ans = (ans + p)%mod;
        }  
        return ans%mod;
    }
};