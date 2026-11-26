class Solution {
public:
    bool canAliceWin(int n) {
        if(n<10){
            return false;
        }
        n= n-10;
        int c=1;
        int k =9;
        while(n>=k){
            n=n-k;
            c++;
            k=k-1;
        }
        return c%2!=0;
    }
};