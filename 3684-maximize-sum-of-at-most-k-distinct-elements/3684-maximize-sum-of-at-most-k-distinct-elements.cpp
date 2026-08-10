class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end(),greater<int>());  // sort in descending order 

        vector<int>ans;

        for(int i=0;i<nums.size() && k>0;i++){
            if(i==0 || nums[i] != nums[i-1]){
                ans.push_back(nums[i]);
                k--;
            }
        }

        return ans;
    }
};