class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        set<int> seen;
        set<int> notSpecial;

        for (int i = 1; i < nums.size(); i++) {

            // Previous block ends here
            if (nums[i] != nums[i - 1]) {
                seen.insert(nums[i - 1]);
            }

            // This number appeared in an earlier block
            if (seen.find(nums[i]) != seen.end()) {
                notSpecial.insert(nums[i]);
            }
        }

        set<int> all(nums.begin(), nums.end());

        return all.size() - notSpecial.size();
    }
};