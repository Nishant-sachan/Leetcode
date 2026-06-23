class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){   //total sum
            sum = sum + nums[i];
        }
        int cs=0;            //cummulative or prefix sum
        for(int i=0;i<nums.size();i++){
            int ls=cs;
            int rs=sum-cs-nums[i];              // right sum
            cs+=nums[i];
            if(ls==rs){
                return i;
            }
        }
        return -1;

    }
};