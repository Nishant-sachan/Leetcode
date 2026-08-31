class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int> temp, vector<int>& nums, vector<int>& freq) {
        if (temp.size() == nums.size()) {
            ans.push_back(temp);
            return;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (freq[i] != 1) {
                freq[i] = 1;
                temp.push_back(nums[i]);
                solve(temp, nums, freq);
                freq[i] = 0;
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> freq(nums.size(), 0);
        vector<int> temp;
        solve(temp, nums, freq);
        return ans;
    }
};