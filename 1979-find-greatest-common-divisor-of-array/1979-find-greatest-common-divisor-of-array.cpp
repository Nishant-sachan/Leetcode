class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mx,mn;
        mx=*max_element(nums.begin(),nums.end());
        mn=*min_element(nums.begin(),nums.end());
        int ans=1;
        for(int k=1;k<=mn;k++){
            if(mx%k==0 and mn%k==0){
                ans =k;
            }
        }
        return ans;
    }
};