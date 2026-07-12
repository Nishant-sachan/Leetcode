class Solution {
public:
    string processStr(string s) {
        string ans="";
        for(char c:s){
            if(c=='%'){
                reverse(ans.begin(),ans.end());
            }
            else if(c=='*' ){
                if(ans.length()>0){
                    ans.pop_back();
                }
            }
            else if(c=='#'){
                ans=ans+ans;
            }
            else{
                ans=ans+string(1,c);
            }

        }
        return ans;
    }
};