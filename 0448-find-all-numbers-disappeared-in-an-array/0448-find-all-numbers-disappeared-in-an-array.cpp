class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            n=abs(nums[i])-1;   //ignore negative marked indices 
            
            if(nums[n]>0){
            nums[n]=-nums[n];    // mark negative 
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                ans.push_back(i+1);
            }
        }
        return ans ;
    }
};
