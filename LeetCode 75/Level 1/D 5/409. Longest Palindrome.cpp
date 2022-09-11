class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> counts;
        int result = 0;
        bool oddFound = false;
        
        for(char c : s) counts[c]++;
        
        for(auto c : counts) {
            if((c.second % 2) == 0) result += c.second;
            else {
                result += (c.second - 1);
                oddFound = true;
            }
        }
        
        if(oddFound) result++;
        
        return result;
    }
};