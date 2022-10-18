class Solution {
public:
    string countAndSay(int n) {
        // Corner Case
        if (n == 0) return "";
            string res = "1";
             while (--n) {
                 
                  string cur = "";
                  for (int i = 0; i < res.size(); i++)
                  {
                   int ct=1;
                  while ((i + 1 < res.size()) && (res[i] == res[i + 1]))
                  {
                           ct++;    
                           i++;
                  }
               cur += to_string(ct) + res[i];
                 }
         res = cur;
        }
    return res;
    }
};