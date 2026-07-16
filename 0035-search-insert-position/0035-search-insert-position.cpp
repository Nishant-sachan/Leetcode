class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
         int s=0;
        int e=nums.size()-1;
        int m=s+(e-s)/2;
        int ind=e+1;
        while(s<=e){
            if(nums[m]>=target){
                ind=m;
                e=m-1;
            }
            else{
                s=m+1;
            }
            m=s+(e-s)/2;
        }
        if(ind==nums.size()+2){
            return nums.size()+1;
        }
        return ind;
        
    }
};