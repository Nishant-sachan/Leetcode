class Solution {
public:

    vector<int> left;
    vector<int> upleft;
    vector<int> downleft;

    void solve(int col, int n, vector<string>& temp,
               vector<vector<string>>& ans) {

        // All columns filled
        if(col == n) {
            ans.push_back(temp);
            return;
        }

        for(int row = 0; row < n; row++) {

            // Check if row and both diagonals are free
            if(left[row] != 1 &&
               upleft[row + col] != 1 &&
               downleft[n - 1 + col - row] != 1) {

                // Place Queen
                temp[row][col] = 'Q';

                left[row] = 1;
                upleft[row + col] = 1;
                downleft[n - 1 + col - row] = 1;

                // Move to next column
                solve(col + 1, n, temp, ans);

                // Backtrack
                temp[row][col] = '.';

                left[row] = 0;
                upleft[row + col] = 0;
                downleft[n - 1 + col - row] = 0;
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {

        vector<string> temp(n, string(n, '.'));

        vector<vector<string>> ans;

        // Row hashing
        left.resize(n, 0);

        // Both diagonals have size 2*n - 1
        upleft.resize(2 * n - 1, 0);
        downleft.resize(2 * n - 1, 0);

        solve(0, n, temp, ans);

        return ans;
    }
};