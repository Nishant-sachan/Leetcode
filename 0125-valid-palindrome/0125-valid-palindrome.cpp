class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> v;
        for(char c:s){
            if(isalnum(c)){
                v.push_back(tolower(c));
            }
        }
        int i=0;
        int j=v.size()-1;
        while(i<j){
            if(v[i]!=v[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
        
    }
};