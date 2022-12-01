class Solution {
public:
    bool halvesAreAlike(string s) {
        string a,b;
        int n=s.size();
        a=s.substr(0,n>>1);
        b=s.substr(n>>1,n);
        int ct1=0,ct2=0;
        for(char c:a){
            if(c=='a'||c=='i'||c=='o'||c=='u'||c=='e'||c=='A'||c=='I'||c=='O'||c=='U'||c=='E') ct1++;
        }
         for(char c:b){
            if(c=='a'||c=='i'||c=='o'||c=='u'||c=='e'||c=='A'||c=='I'||c=='O'||c=='U'||c=='E') ct2++;
        }
        return ct1==ct2;
    }
};