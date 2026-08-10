class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> mp;
        int l=0,r=0;
        int len=0;
        int maxlen=len;
        while(r<s.size()){
            if (mp.find(s[r]) != mp.end()) {
                l = max(l, mp[s[r]] + 1);
            }
            mp[s[r]]=r;
            len=r-l+1;
            maxlen=max(len,maxlen);
            r++;
        }
        return maxlen;
    }
};