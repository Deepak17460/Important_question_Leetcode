#include <bits/stdc++.h>
using namespace std;

string isBalanced(string s) {
          unordered_map<char,int> symbols={{'[',-1},{'{',-2},{'(',-3},{']',1},{'}',2},{')',3}}; //  time complexity O(1)
          stack<char> st;
          for(char brackets: s){
        
         if(symbols[brackets]<0){
            st.push(brackets);
        }
        
        else{
            if(st.empty())
            {
              return "NO";
            }
            char top = st.top();
            st.pop();
            if(symbols[brackets]+symbols[top]!=0){
                return "NO";
            }
            
        }
    }
    if(st.empty()){
    return "YES"; 
    }
    else {
      return "NO";
    }
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    cout<<isBalanced(s)<<endl;
	}
	return 0;
}

// Time Complexity is O(n) & Space Complexity is O(n) where n is Numbers of character in String

