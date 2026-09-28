class Solution {
public:
    int maxDepth(string s) {
        int c=0;
        int maxc=0;
        for(auto i : s){
            if(i=='('){
                c++;
                maxc=max(maxc,c);
            }
            if(i==')'){
                c--;
            }
        }
        return maxc;
    }
};