class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string,int> mp;
          for(string str:words) mp[str]++;
           int ans=0,m=0;
          bool flag=false;
         for(auto x: mp)
         {
        string s=x.first;
        string t=s;
        reverse(s.begin(),s.end());
          if(s==t)
              {
            ans+=x.second/2;
            if(x.second%2!=0) 
                flag=true;
            }
          else
        {
            if(mp.count(s)!=0){
                ans+=min(x.second,mp[s]);
                mp.erase(s);
                }
        }
         }
    ans=ans*4;
    if(flag==true) 
        ans+=2;
    return ans;
    }
};