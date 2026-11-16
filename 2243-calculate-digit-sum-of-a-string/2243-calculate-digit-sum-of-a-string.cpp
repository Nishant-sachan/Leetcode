
class Solution {
public:
    string solve(string s, int k) {
        string res = "";

        int i = 0;
        int x = s.length();

        while (i < x) {
            int sum = 0;

            for (int j = i; j < min(i + k, x); j++) {
                sum += s[j] - '0';
            }

            res += to_string(sum);
            i += k;
        }

        return res;
    }

    string digitSum(string s, int k) {
        while (s.length() > k) {
            s = solve(s, k);
        }

        return s;
    }
};
