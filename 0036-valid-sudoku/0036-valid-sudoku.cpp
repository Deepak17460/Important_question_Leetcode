
#define Rep(i,a,b) for(int i=a;i<b;i++)
#define ll long long

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        // using HashSet
        vector<set<int>> Row(9),Col(9),Block(9);
        ll n=board.size();
          Rep(i,0,9){
              Rep(j,0,9){
                  // If it is not present in the cell then Move on
                  if(board[i][j]=='.') continue;
                  ll Curr_num=board[i][j]-'0';
                  // checking That no same element is prersent in cell or Not
                  if(Row[i].count(Curr_num)||Col[j].count(Curr_num)||Block[(i/3)*3+j/3].count(Curr_num))
                      return 0;
                  Row[i].insert(Curr_num);
                  Col[j].insert(Curr_num);
                  Block[(i/3)*3+j/3].insert(Curr_num);
              }
          }
        return 1;
    }
};