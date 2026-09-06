class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int instability_score =0;
        int ind=0;
        int n=nums.size();
        int minn=INT_MAX;
        vector<int> minat(n,0);
        for(int i=n-1;i>=0;i--){
            if(nums[i]<minn){
                minn=nums[i];
            }
            minat[i]=minn;
        }
        int maxx =INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]>maxx){
                maxx=nums[i];
            }
            instability_score=maxx-minat[i];
            if(instability_score<=k){
                return i;
            }
        }
        return -1;
    }
};