class Solution {
public:
    int reverseDegree(string s) {
        vector<int> idx;
        for(int i=0;i<s.length();i++){
            idx.push_back((abs(s[i]-'z')+1)*(i+1));
        
        }
        int ans=0;
        for(int i:idx){
            ans+=i;
        }
        return ans;
    }
};