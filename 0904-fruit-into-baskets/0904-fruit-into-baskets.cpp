class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        vector<int> freq(100001, 0);

        int i = 0;
        int count = 0;
        int ans = 0;

        for (int j = 0; j < fruits.size(); j++) {

            if (freq[fruits[j]] == 0) {
                count++;
            }

            freq[fruits[j]]++;

            while (count > 2) {
                freq[fruits[i]]--;

                if (freq[fruits[i]] == 0) {
                    count--;
                }

                i++;
            }

            ans = max(ans, j - i + 1);
        }

        return ans;
    }
};