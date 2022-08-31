class Solution {
    vector<int> xaxis = {1, 0, -1, 0};
    vector<int> yaxis = {0, 1, 0, -1};
public:
    bool isSafe(int x, int y, int x0, int y0, vector<vector<int>>& heights, vector<vector<bool>> &record) {
        int m = heights.size();
        int n = heights[0].size();
        if (x >= 0 && x < m && y >= 0 && y < n && heights[x][y] >= heights[x0][y0] && record[x][y] == false) {
            return true;
        }
        
        return false;
    }
    
    void processQueue(queue<pair<int,int>> &q, vector<vector<int>> &heights, vector<vector<bool>> &record) {
        while (!q.empty()) {
            pair<int, int> front = q.front();
            int x0 = front.first, y0 = front.second;
            for (int i = 0; i < 4; i++) {
                int x = x0 + xaxis[i], y = y0 + yaxis[i];
                if (isSafe(x, y, x0, y0, heights, record)) {
                    q.push({x, y});
                    record[x][y] = true;
                }
            }
            q.pop();
        }
    }
    
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int m = heights.size();
        int n = heights[0].size();
        vector<vector<bool>> pacificrecord(m ,vector<bool> (n, false));
        vector<vector<bool>> atlanticrecord(m ,vector<bool> (n, false));
        queue<pair<int,int>> pacificqueue;
        queue<pair<int,int>> atlanticqueue;
        vector<vector<int>> result;

        for (int i = 0; i < m; i++) {
            pacificrecord[i][0] = true;
            atlanticrecord[i][n - 1] = true;
            pacificqueue.push({i, 0});
            atlanticqueue.push({i, n - 1});
        }
        
        for(int j = 0; j < n; j++) {
            pacificrecord[0][j] = true;
            atlanticrecord[m - 1][j] = true;
            pacificqueue.push({0, j});
            atlanticqueue.push({m - 1, j});
        }
        
        processQueue(pacificqueue, heights, pacificrecord);
        processQueue(atlanticqueue, heights, atlanticrecord);
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (pacificrecord[i][j] == true && atlanticrecord[i][j] == true) {
                    result.push_back({i, j});
                }
            }
        }
        
        return result;
    }
};