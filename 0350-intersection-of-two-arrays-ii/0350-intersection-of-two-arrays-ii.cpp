class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp;
        vector<int> ans;
        for(int i:nums1){
            if(mp.find(i)!=mp.end()){
                mp[i]+=1;
            }
            else{
                mp[i]=1;
            }
        }
        for(int i:nums2){
            if(mp.find(i)!=mp.end() and mp[i]!=0){
                ans.push_back(i);
                mp[i]--;
            }

        }
        return ans;
    }
};