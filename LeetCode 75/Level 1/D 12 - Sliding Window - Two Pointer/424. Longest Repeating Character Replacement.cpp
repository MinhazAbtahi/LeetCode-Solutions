class Solution {
public:    
    int characterReplacement(string s, int k) {        
        int result = 0, max_count = INT_MIN;
        unordered_map<char, int> count;
        int len = s.length();
        
        for (int i = 0; i < len; ++i) {
            ++count[s[i]];
            max_count = max(max_count, count[s[i]]);
            
            if (result - max_count >= k) {
                --count[s[i-result]];
            } 
            else {
                ++result;
            }
        }
        return result;
    }
};