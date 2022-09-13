class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
           vector<int>res;
        int direction = 1;
        int i=0, j=0;
        while (i < mat.size()&&j < mat[0].size()) {
            res.push_back(mat[i][j]);
            if (direction==1) {
                if (i == 0||j == mat[0].size()-1) {
                    direction = 0;
                    j != mat[0].size()-1 ? ++j : ++i;
                    continue;
                }
                --i;
                ++j;
            }
            else {
                if (j == 0 or i == mat.size()-1) {
                    direction = 1;
                    i != mat.size()-1 ? ++i : ++j;
                    continue;
                }
                ++i;
                --j;
            }
        }
        return res;
    }
};