class Solution {
    private:
     static bool mycompare(vector<int>& a, vector<int>& b) {
        return a[0] < b[0] || (a[0] == b[0] && a[1] < b[1]);
    }
    int orientation(vector<int>& a, vector<int>& b, vector<int>& c) {
        return (b[0] - a[0])*(c[1] - b[1]) - (b[1] - a[1])*(c[0] - b[0]);
    }
public:
    vector<vector<int>>outerTrees(vector<vector<int>>& trees) {
         int n = trees.size();
        vector<vector<int>>res;
        sort(trees.begin(), trees.end(), mycompare);
        // left to right
        for (int i = 0; i < n; ++i) {
            while (res.size() > 1 && orientation(res[res.size()-2], res.back(), trees[i]) < 0) 
                res.pop_back();
                res.push_back(trees[i]);
        }
        // if all points along a line, ans.size() is n after left to right procedure
        if (res.size() == n) return res;
        // right to left
        for (int i = n-2; i >= 0; --i) {
            while (res.size() > 1 && orientation(res[res.size()-2], res.back(), trees[i]) < 0) 
                res.pop_back();
                res.push_back(trees[i]);
        }
           res.pop_back();
           return res;
    }
   
};