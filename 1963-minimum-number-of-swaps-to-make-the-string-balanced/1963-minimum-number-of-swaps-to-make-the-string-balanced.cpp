class Solution {
public:
    int minSwaps(string s) {
        int k=0;
        for(char c:s){
            if(c=='['){
                k++;
        }
            else{
                if(k!=0){
                   k--;
                }
                else{
                    k++;
                }
            }
        }
        return (k+1)/2;
    }
};