class Solution {
public:
    string removeDuplicates(string s) {
        // Length of String
        int n=s.size();
        stack<char>st;
        for(int i=0;i<n;i++){
            if(st.size()!=0 && st.top()==s[i]){
                while(st.size()!=0 && st.top()==s[i]) st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        string res;
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
            
        }
         reverse(res.begin(),res.end());
        return res;
    }
};