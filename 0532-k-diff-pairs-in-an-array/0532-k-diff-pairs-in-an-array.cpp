class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int ans=0;
        for (int i = 0; i < nums.size(); i++) {
                mp[nums[i]]++;
        }
        if (k == 0) {
            for (auto& [key, value] : mp) {
                if(value>=2){
                    ans++;
                }
            }
        }
        else{
        for (auto& [key, value] : mp){
            if (mp.find(key+k) != mp.end()) {
                ans++;
            }
        }
        }
        return ans;

    }
};