class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        // Number of col
        int n=matrix.size();
        // Number of row
        int m=matrix[0].size();
            for(int i=0;i<n;i++){
                for(int j=0;j<i;j++){
                    swap(matrix[i][j],matrix[j][i]);
                }
            }
        for(auto &i:matrix){
            reverse(i.begin(),i.end());
        }
    }
};