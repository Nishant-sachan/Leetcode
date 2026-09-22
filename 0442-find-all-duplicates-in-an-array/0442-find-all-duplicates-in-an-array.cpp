class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int> mp;
        for(int c : nums){
            if(mp.find(c)!=mp.end()){
                mp[c]+=1;
            }
            else{
                mp[c]=1;
            }
        }
        vector<int> ans;
        for(int i:nums){
            if(mp.find(i)!=mp.end()){
                if(mp[i]>=2)
                ans.push_back(i);
                mp[i]--;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};