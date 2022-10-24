class Solution {
    bool Compare(vector<int>&selected,string &currString){
    vector<int>selfCheck(26,0);
    for(int i=0;i<currString.size();i++){
          // itself repeating character
        if(selfCheck[currString[i]-'a']==1)  return false; 
        selfCheck[currString[i]-'a']=1;
    }
    for(int i=0;i<currString.size();i++){
        // Already picked in past
        if(selected[currString[i]-'a']==1) return false;
    }
    return true;
}
    private:
    int Helper(int i,vector<string>&arr,vector<int>&selected,int len){
    if(i==arr.size()){
        return len;
    }
    string currString=arr[i];
    if(Compare(selected,currString)==false){
        return Helper(i+1,arr,selected,len);
    }
    else
    {
        // picking current string
        for(int j=0;j<currString.size();j++){
            selected[currString[j]-'a']=1;
        }
        len+=currString.size();
        int op1=Helper(i+1,arr,selected,len);
        // skiping the current String
         for(int j=0;j<currString.size();j++){
            selected[currString[j]-'a']=0;
         }
        len-=currString.size();
         int op2=Helper(i+1,arr,selected,len);
        
        return max(op1,op2);
        
    }
}
public:
    int maxLength(vector<string>& arr) {
        vector<int>selected(26,0);
         return Helper(0,arr,selected,0);
    }
};