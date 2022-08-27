class Solution {
public:
    int maxSumSubmatrix(vector<vector<int>>& matrix, int k) {
            
        if(matrix.empty())
            return 0;
        
        int res = INT_MIN;
        int n= matrix.size(), m= matrix[0].size();
        for(int l=0;l<m;l++){
            vector<int> temp(n,0);
            for(int r=l; r<m;r++){
                for(int i=0;i<n;i++){
                    temp[i] += matrix[i][r];
                }
            set<int>Set;
            Set.insert(0);
            int Sum = 0, max_sum = INT_MIN;
            for (int sum : temp) {
                Sum += sum;
                auto it = Set.lower_bound(Sum - k);
                
                if (it != Set.end()) 
                max_sum = max(max_sum, Sum - *it);
                
                Set.insert(Sum);
            }
             res = max(res, max_sum);
            }
        }
        return res;
    }
};