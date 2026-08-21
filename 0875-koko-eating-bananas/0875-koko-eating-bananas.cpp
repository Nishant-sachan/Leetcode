class Solution {
public:
    long long calHr(vector<int>& piles, int mid) {
        long long n = piles.size();
        long long hour = 0;
        for(int i=0; i<n; i++) {
            hour += piles[i] / mid;
            if(piles[i] % mid != 0) {
                hour++;
            }
        }
        return hour;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int start = 1;
        int end = *max_element(piles.begin(),piles.end());      
        int ans;
        while(start <= end) {
            int mid = start + (end - start) / 2;
            if(calHr(piles,mid) <= h) {
                ans = mid;
                end = mid - 1;
            }else {
                start = mid + 1;
            }
        }
        return ans;
    }
};