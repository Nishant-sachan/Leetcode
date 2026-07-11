class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=1;i<=n;i++){
            sum=sum^i;
            sum=sum^nums[i-1];
        }
        return sum;
    }
};