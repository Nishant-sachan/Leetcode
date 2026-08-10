class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        vector<int> ans;
        set<int> s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        nums.clear();
        for(int i:s){
            nums.push_back(i);
        }
        sort(nums.begin(), nums.end(), greater<int>());
        int i=0;
        while(i<k and i<nums.size()){
            ans.push_back(nums[i]);
            i++;
        }
        return ans ;
    }
};