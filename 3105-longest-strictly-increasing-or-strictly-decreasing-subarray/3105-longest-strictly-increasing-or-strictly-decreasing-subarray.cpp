class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int incr =1;
        int decr =1;
        int res =1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                incr++;
                decr=1;
                res=max(res,incr);
            }
            else if(nums[i]<nums[i-1]){
                incr=1;
                decr++;
                res=max(res,decr);
            }
            else{
                incr=1;
                decr=1;
            }
        }
        return res;
    }
};