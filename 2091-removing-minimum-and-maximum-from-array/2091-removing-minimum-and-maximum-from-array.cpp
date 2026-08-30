class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();

        int minInd = 0;
        int maxInd = 0;

        int maxx = INT_MIN;
        int minn = INT_MAX;

        for (int i = 0; i < n; i++) {
            if (nums[i] < minn) {
                minn = nums[i];
                minInd = i + 1;
            }

            if (nums[i] > maxx) {
                maxx = nums[i];
                maxInd = i + 1;
            }
        }

        // Make minInd <= maxInd
        if (minInd > maxInd) {
            swap(minInd, maxInd);
        }

        // 1. Both from left
        int left = maxInd;

        // 2. Both from right
        int right = n - minInd + 1;

        // 3. Min from left, max from right
        int both = minInd + n - maxInd + 1;

        return min({left, right, both});
    }
};

// class Solution {
// public:
//     int minimumDeletions(vector<int>& nums) {
//         int minInd =0;
//         int maxInd=0;
//         int maxx=INT_MIN;
//         int minn=INT_MAX;
//         for(int i=0;i<=nums.size()-1;i++){
//             if(minn>nums[i]){
//                 minn=nums[i];
//                 minInd=i+1;
//             }
//             if(maxx<nums[i]){
//                 maxx=nums[i];
//                 maxInd=i+1;
//             }
//         }
//         int a=nums.size()-minInd+1;
//         if(minInd>a){
//             minInd=a;
//         }
//         int b=nums.size()-maxInd+1;
//         if(maxInd>b){
//             maxInd=b;
//         }
//         return minInd+maxInd;
        
//     }
// };