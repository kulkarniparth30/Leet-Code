class Solution {
public:
    bool isPowerOfFour(int n) {
        return n > 0 && !(n & (n-1)) && (n & 0x55555555);

        if(n <= 0) return false;

        if(n % 2 == 0){
            n = n / 4;
        }
        return n == 1;
    }
};