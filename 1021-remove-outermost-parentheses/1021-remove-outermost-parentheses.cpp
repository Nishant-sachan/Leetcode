class Solution {
public:
    string removeOuterParentheses(string s) {
        int count =0;
        string ans="";
        stack<int>st;
        for (auto i :s){
            if(i=='('){
                st.push(i);
                count++;
                if(count>1){
                    ans.push_back(i);
                }
            }
            else{
                if(count>=2){
                    ans.push_back(i);
                }
                st.pop();
                count--;
            }
        }
        return ans;
    }
};