class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int> mp;

        
        for(char c : s){
            if(mp.find(c)!=mp.end()){
                mp[c]+=1;
            }
            else{
                mp[c]=1;
            }
        }
        
        for(int i=0;i<s.size();i++){
            if(mp[s[i]]==1){
                return i;
            }
        }
        
        return -1;
        
    }
};