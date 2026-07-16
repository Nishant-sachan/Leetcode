class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        if(m> bloomDay.size()/k){
            return -1;
        }
        int ans;
        int l=*min_element(bloomDay.begin(),bloomDay.end());
        int h=*max_element(bloomDay.begin(),bloomDay.end());
        while(l<=h){
            int mid =l+(h-l)/2;
            if(isPos(bloomDay,mid,m,k)){
                ans=mid;
                h=mid-1;
            }
            else{
                l=mid+1;
            }

        }
        return ans;
        
    }
    bool isPos(vector<int>& bloomDay,int mid, int m, int k){
        int c=0;
        int t=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=mid){
                c++;
            
            if(c==k){
                t++;
                c=0;
            }
            }
            else{
                c=0;
            }
            if(t>=m){
                return true;
            }
        }
        return false;
    }
};