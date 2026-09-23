class Solution {
public:
    bool validPalindrome(string s) {
        auto check = [&](int i, int j) {
            while (i < j) {
                if (s[i] != s[j]) {
                    return false;
                }
                i++;
                j--;
            }
            return true;
        };

        int i = 0;
        int j = s.length() - 1;

        while (i < j) {
            if (s[i] != s[j]) {
                return check(i, j - 1) || check(i + 1, j);
            }

            i++;
            j--;
        }

        return true;
    }
};