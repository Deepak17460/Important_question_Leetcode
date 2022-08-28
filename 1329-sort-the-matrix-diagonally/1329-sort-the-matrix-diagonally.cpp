class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int row = mat.size(), col = mat[0].size();
        if(row == 1 || col == 1)
            return mat;
        vector<vector<int>> res(row, vector<int> (col, 0));
        for(int i = row - 1; i >= 0; i--)
        {   
            priority_queue<int> temp;
            int r = i, c = 0;
            while(r < row && c < col)
            {
                temp.push(mat[r][c] * -1);
                r++;
                c++;
            }
            r = i;
            c = 0;
            while(r < row && c < col)
            {
                res[r][c] = temp.top() * -1;
                temp.pop();
                r++;
                c++;
            }
        }
        for(int i = 1; i < col ; i++)
        {
            priority_queue<int> temp;
            int r = 0, c = i;
            while(c < col && r < row)
            {
                temp.push(mat[r][c] * -1);
                r++;
                c++;
            }
            r = 0;
            c = i;   
            while(c < col && r < row)
            {
                res[r][c] = temp.top() * -1;
                temp.pop();
                r++;
                c++;
            }            
        }
        return res;
    }
};