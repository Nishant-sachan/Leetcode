class Solution {
public:
    string removeOuterParentheses(string s) {
        int count =0;
        string ans="";
        for (auto i :s){
            if (i==')')  count--;
            if(count!=0) ans.push_back(i);
            if(i=='(')  count++;
        }
        return ans;
    }
};