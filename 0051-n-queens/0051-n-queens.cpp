class Solution {
public:
    void solve(int col, int n, vector<int> &left, vector<int> &upleft, vector<int> &downleft,
               vector<string> &temp, vector<vector<string>> &ans) {
        if (col == n) {
            ans.push_back(temp);
            return;
        }
        for (int row = 0; row < n; row++) {
            if (left[row]==0 && upleft[row+col]==0 && downleft[n-1+col-row]==0) {
                temp[row][col] = 'Q';
                left[row] = upleft[row+col] = downleft[n-1+col-row] = 1;

                solve(col+1, n, left, upleft, downleft, temp, ans);

                temp[row][col] = '.';
                left[row] = upleft[row+col] = downleft[n-1+col-row] = 0;
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> temp(n, string(n, '.'));
        vector<int> left(n,0), upleft(2*n,0), downleft(2*n,0);
        solve(0, n, left, upleft, downleft, temp, ans);
        return ans;
    }
};