class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int i=0;
        int s=1;
        vector<string> ans;
        while(i<target.size() and s<=n){
            if(target[i]==s){
                ans.push_back("Push");
                i++;
            }
            else{
                ans.push_back("Push");
                ans.push_back("Pop");
            }
            s++;
        }
        return ans;
    }
};