class Solution {
    private:
    string Helper(string &s,int sz){
        while(sz!=s.size()){
            sz=s.size();
        for(int i=0;i<s.size()-1;i++)
            if(abs(s[i]-s[i+1])==32)
                s=s.substr(0,i)+s.substr(i+2);
            
        
        
    }
        return s;
    }
public:
    string makeGood(string s) {
        int n=s.size();
					string ans="";
					if(s.size()==0)
						return ans;
					if(s.size()<2)
						return s;
					for(int i=0;i<s.size();++i)
					{
						if(abs(s[i]-s[i+1])==32)
						{
							s.erase(i,2);
							if(i==0)
								i--;
							else
								i-=2;
						}    
					}
					return s;
    }
};