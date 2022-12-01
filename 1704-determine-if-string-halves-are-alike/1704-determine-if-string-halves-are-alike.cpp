class Solution {
public:
    bool halvesAreAlike(string s) {
       // string a,b;
        int n=s.size();
        // a=s.substr(0,n>>1);
        // b=s.substr(n>>1,n);
        int ct1=0,ct2=0;
        for(int i=0;i<n/2;i++){
            if(s[i]=='a'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='e'||s[i]=='A'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='E')                     ct1++;
        }
         for(int i=n/2;i<n;i++){
            if(s[i]=='a'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='e'||s[i]=='A'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='E')                     ct2++;
        }
        return ct1==ct2;
    }
};