class Solution {
public:
    int singleNumber(vector<int>& nums) {
       unordered_map<int,int>mp;
       for(int i : nums){
        if(mp.find(i)!=mp.end()){
            mp[i]++;
        }
        else{
            mp[i]=1;
        }
       }
       for(int i:nums){
        if(mp[i]==1){
            return i;
        }
       }
       return -1;
        
    }
};