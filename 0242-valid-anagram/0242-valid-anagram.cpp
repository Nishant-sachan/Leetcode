class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>f1(26,0);
        vector<int>f2(26,0);
        if(s.size()!=t.size()){
            return false;
        }
        for(char ch: s){
            f1[ch-'a']++;
        }
        for(char ch: t){
            f2[ch-'a']++;
        }
        for(int i=0;i<f1.size();i++){
            if(f1[i]!=f2[i]){
                return false;
            }
        }
        return true;
    }
};