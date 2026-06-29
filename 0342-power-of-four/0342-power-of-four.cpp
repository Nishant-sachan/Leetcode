class Solution {
public:
    bool isPowerOfFour(int n) {
        // n > 0 to ensure the number is positive
        //(n & (n - 1)) == 0 to verify there's only one 1 bit (property of powers of two)
        //(n & 0xAAAAAAAA) == 0 to ensure the 1 bit is at an even position (0xAAAAAAAA has 1s at all odd bit positions
        return n > 0 && (n & (n - 1)) == 0 && (n & 0xAAAAAAAA) == 0;
    }
};