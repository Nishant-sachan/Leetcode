class Solution {
public:
    int smallestNumber(int n, int t) {
        int prod=1;
    for(int i=n;i<n+10;i++){
        int temp=i;
        prod=1;
        while(temp!=0){
            int rem=temp%10;
            prod=prod*rem;
            temp=temp/10;
        }
        if(prod%t==0){
            return i;
        }
     }   
    return 0;
    }
};