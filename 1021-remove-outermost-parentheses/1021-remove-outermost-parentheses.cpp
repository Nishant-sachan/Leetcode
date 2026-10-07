class Solution {
public:
    string removeOuterParentheses(string s) {

        int open = 0;
        int close = 0;
        int i = 0;
        int j = 0;
        string ans = "";

        while(j < s.length()) {

            if(s[j] == '(') {
                open++;
            }
            else {
                close++;
            }

            if(open == close) {
                ans += s.substr(i + 1, j - i - 1);

                open = 0;
                close = 0;
                i = j + 1;
            }

            j++;
        }

        return ans;
    }
};