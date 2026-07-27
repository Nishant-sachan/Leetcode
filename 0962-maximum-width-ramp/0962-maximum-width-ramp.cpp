class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {

        int n = nums.size();

        vector<int> v(n);

        v[n-1] = nums[n-1];

        for(int i=n-2;i>=0;i--){
            v[i] = max(nums[i],v[i+1]);
        }

        int i = 0;
        int j = 0;
        int ans = 0;

        while(i<n && j<n){

            if(nums[i] <= v[j]){
                ans = max(ans, j-i);
                j++;
            }
            else{
                i++;
            }
        }

        return ans;
    }
};