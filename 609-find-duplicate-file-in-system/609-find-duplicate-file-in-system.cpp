class Solution {
public:
    unordered_map<string, vector<string>> mp;

pair<string, int> getRoot(string& s){
    string root = "";
    int index = 0;
    for(auto i = 0; i < s.length(); i++){
        if(s[i] == ' '){
            root = s.substr(0, i);
            index = i;
            break;
        }
    }
    cout << root << endl;
    return make_pair(root, index);
}

void extract(string& s){
    pair<string, int> p = getRoot(s);
    string root = p.first;
    int index = p.second;
    
    for(auto i = index; i < s.length(); i++){
        if(s[i] == ' '){
            string d = "";
            for(auto j = i+1; j < s.length(); j++){
                if(s[j] == '('){
                    string txt = "";
                    for(auto k = j+1; k < s.length(); k++){
                        if(s[k] != ')'){
                            txt += s[k];
                        }else{break;}
                    }
                    cout << "text --> " << txt << endl; 
                    string suffix = s.substr(i+1, j-i-1);
                    d = root + '/' + suffix;
                    cout << "d --> " << d << endl;
                    mp[txt].push_back(d);
                    break; 
                }
            }
        }
    }
}

vector<vector<string>> findDuplicate(vector<string>& paths) {
    vector<vector<string>> res;
    for(auto s : paths) extract(s);
    
    for(auto it = mp.begin(); it != mp.end(); it++){
        if(it->second.size() > 1) res.push_back(it->second);
    }
    
    return res;
   } 
};