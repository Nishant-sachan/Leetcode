class Solution {
public:
    bool checkString(string s) {
        bool ans = true ;
        int i=0;
        if(s.length()==1){
            return true;
        }
        while(s[i]=='a'){
            i++;
        }
        if(s.length()!=i){
        while(i!=s.length()){
            if(s[i]=='a'){
                return false;
            }
            i++;
        }
        }
        return ans;
    }
};