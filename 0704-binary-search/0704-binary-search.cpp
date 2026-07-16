class Solution {
public:
    int search(vector<int>& nums, int target) {
        int e,s,mid;
        e=nums.size()-1;
        s=0;
        mid=s+(e-s)/2;
        while(s<=e){
            if(target==nums[mid]){
                return mid;
            }
            else if(target>nums[mid]){
                s=mid+1;
            }
            else {
                e=mid-1;
            }
            mid=s+(e-s)/2;

        }
        return -1;
    }
};