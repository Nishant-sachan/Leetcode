class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int d=0;
        vector<int>result;
        for(char s:seq){
            if(s=='('){
                d++;
                result.push_back((d%2==0)?0:1);
            }
            else{
                result.push_back((d%2==0)?0:1);
                d--;
            }
        }
        return result;
        
    }
};