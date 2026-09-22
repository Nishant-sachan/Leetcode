class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i:nums){
            if(mp.find(i)!=mp.end()){
                mp[i]+=1;
            }
            else{
                mp[i]=1;
            }
        }
        int count =0;
        for(int i:nums){
            if(mp.find(i+k)!=mp.end()){
                count+=mp[i+k];
            }
        }
        return count;
    }
};