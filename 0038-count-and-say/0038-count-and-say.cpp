class Solution {
public:
    string countAndSay(int n) {
        if(n==1){
            return "1";
        }
        string say =countAndSay(n-1);
        string res="";

        for(int  i=0;i<say.length();i++){
            int count =1;
            char c=say[i];
            while(i<say.length()-1 and say[i]==say[i+1]){
                count++;
                i++;
            }
            res+=to_string(count)+string(1,c);
        }
        
        return res;
    }
};