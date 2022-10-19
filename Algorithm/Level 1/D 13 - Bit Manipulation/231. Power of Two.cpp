class Solution {
public:
    bool isPowerOfTwo(int n) {
        // Shortcut Bit manipualtion
        //return n > 0 ? !(n & (n - 1)) : false;
        
        /* recursive
        if (n <= 0) return false;
        if (n == 1) return true;
        if (n % 2 != 0) return false;
        
        return isPowerOfTwo(n / 2);
        */
        
        
        if (n <= 0) return false;

        while(n % 2 == 0) { n /= 2; }
        return (n == 1);      
    }
};