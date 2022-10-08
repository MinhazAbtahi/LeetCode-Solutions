class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> u_map;
        
        for (char ch : magazine) u_map[ch]++;
        for (char ch : ransomNote) { 
            if(u_map.find(ch) == u_map.end()) return false;
            if(u_map[ch] <= 0) return false;
            u_map[ch]--;
        }
        
        return true;
    }
};