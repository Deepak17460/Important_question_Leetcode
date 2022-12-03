#define ll long long
class Solution {
public:
    string frequencySort(string s) {
       
        vector<pair<ll,char>>Dict(126,{0,0});
        for(char ch : s){
            Dict[ch]={Dict[ch].first+1,ch};
        }
            // Sorting the Hash
            sort(Dict.begin(),Dict.end());
        
            for(auto p:Dict){
                cout<<p.first<<" "<<p.second<<endl;
            }
            string res="";
            for(auto p : Dict){
                
                res=string(p.first,p.second)+res;
                cout<<res<<endl;
            }
        return res;
    }
};