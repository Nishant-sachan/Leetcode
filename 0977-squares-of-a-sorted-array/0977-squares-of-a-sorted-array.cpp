class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=n-1;
        int c=1;
        vector<int> ans(n,0);
        while(i<=j){
            if(abs(nums[i])>nums[j]){
                ans[n-c]=nums[i]*nums[i];
                i++;
                c++;
            }
            else{
                ans[n-c]=nums[j]*nums[j];
                j--;
                c++;
            }
        }
        return ans;
    }
};