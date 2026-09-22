class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;
        if(s.length()!=t.length()){
            return false;
        }
        for(char i:s){
            if(mp.find(i)!=mp.end()){
                mp[i]++;
            }
            else{
                mp[i]=1;
            }
        }
        for(char x:t){
            if(mp.find(x)==mp.end() or mp[x]==0){
                return false;
            }
            else{
                mp[x]--;
            }
        }
        return true;
    }
};