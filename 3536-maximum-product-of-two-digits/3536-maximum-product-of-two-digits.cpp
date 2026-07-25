class Solution {
public:
    int maxProduct(int n) {
        int n1=n%10;
        n=n/10;
        int n2=n%10;
        n=n/10;
        if(n1>n2){
            swap(n1,n2);
        }
        while(n!=0){
            int d=n%10;
            if(d>n1){
                n1=d;
            }
            else if(d>n2){
                n2=d;
            }
            if(n1>n2){
            swap(n1,n2);
        }
            n=n/10;
        }
        return n1*n2;
    }
};
    