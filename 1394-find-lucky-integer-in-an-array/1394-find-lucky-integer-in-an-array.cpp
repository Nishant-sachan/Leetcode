class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>mp;
        int ans=-1;
        for(int i:arr){
            if(mp.find(i)!=mp.end()){
                mp[i]++;
            }
            else{
                mp[i]=1;
            }
        }
        for(int i:arr){
             if(mp[i]==i){
                ans=max(ans,mp[i]);
            }
        }
        return ans;
    }
};