class Solution {
public:
    bool canAliceWin(int n) {
        int c= (21-sqrt(441-8*n))/2;
        return c%2!=0;
    }
};