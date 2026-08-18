class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int s=nums[0];
        for(int i=1;i<nums.size();i++){
            if(i%2==0 ){
                s+=nums[i];
            }
            else{
                s-=nums[i];
            }
        }
        return s;
    }
};