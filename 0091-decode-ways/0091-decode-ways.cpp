
class Solution {
public:
    int solve(string &s, int ind, vector<int>& dp) {
        if(ind == s.length()) {
            return 1;
        }

        if(s[ind] == '0') {
            return 0;
        }

        if(dp[ind] != -1) {
            return dp[ind];
        }

        int one = solve(s, ind+1, dp);
        int two = 0;

        if(ind+1 < s.length() &&
          (s[ind] == '1' ||
          (s[ind] == '2' && s[ind+1] <= '6'))) {

            two = solve(s, ind+2, dp);
        }

        return dp[ind] = one + two;
    }

    int numDecodings(string s) {
        vector<int> dp(s.length(), -1);
        return solve(s, 0, dp);
    }
};
