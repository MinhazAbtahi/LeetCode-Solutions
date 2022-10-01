class Solution {
public:
    int firstUniqChar(string s) {
        int len = s.length();
        unordered_map<char, int> map;
        
        for (char ch : s) map[ch]++;
        
        for(int i = 0; i < len; i++) {
            if(map[s[i]] == 1) return i; 
        } 
        
        return -1;
    }
};