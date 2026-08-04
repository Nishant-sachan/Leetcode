class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        int minn = *min_element(nums.begin(),nums.end());
        int maxx = *max_element(nums.begin(),nums.end());
        sort(nums.begin(),nums.end());
        int i=0;
        while(i<nums.size()){
            if(nums[i]!=minn){
                ans.push_back(minn);
            
            }
            else{
                i+=1;
            }
            minn+=1;
        }
        return ans;
    }
};