class Solution {
    private:
    void Helper(int ind,string &digit,vector<string>&ans,string &res,unordered_map<int,string>&map){
        // base case
        if(ind>=digit.size()){
            ans.push_back(res);
            return;
        }
        // Main Calculation
        int num=digit[ind]-'0';
            //cout<<num<<endl;
        string getString=map[num];
        //cout<<getString;
        for(int i=0;i<getString.size();i++){
            res.push_back(getString[i]);
            Helper(ind+1,digit,ans,res,map);
            res.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        
        vector<string>ans;
        // Edge case
        if(digits.size()==0) return ans;
        string res="";
        unordered_map<int,string>map;
        map[0]="";
        map[1]="";
        map[2]="abc";
        map[3]="def";
        map[4]="ghi";
        map[5]="jkl";
        map[6]="mno";
        map[7]="pqrs";
        map[8]="tuv";
        map[9]="wxyz";
        Helper(0,digits,ans,res,map);
        return ans;
        
    }
};
