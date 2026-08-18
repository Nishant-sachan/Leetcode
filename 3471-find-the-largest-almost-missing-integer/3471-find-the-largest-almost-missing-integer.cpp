class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int, int> freq;

        int i = 0;
        int j = k - 1;
        int n = nums.size();

        while (j < n) {
            unordered_set<int> st;  // current window ke unique elements

            for (int m = i; m <= j; m++) {
                st.insert(nums[m]);
            }

            // element ek window mein ek hi baar count hoga
            for (int x : st) {
                freq[x]++;
            }

            i++;
            j++;
        }

        int ans = -1;

        for (int x : nums) {
            if (freq[x] == 1) {
                ans = max(ans, x);
            }
        }

        return ans;
    }
};