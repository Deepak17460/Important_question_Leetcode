class Solution {
   bool Helper(string &s1,string &s2){
      // using unordered_map
       vector<int>res(26,0);
       for(char c:s2){
           res[c-'a']+=1;
       }
      for(char c:s1){
          if(res[c-'a']==0) return 0;
          else{
              res[c-'a']-=1;
          }
      }
       return 1;
   } 
    
public:
    bool canConstruct(string ransomNote, string magazine) {
        return Helper( ransomNote,magazine);
    }
};