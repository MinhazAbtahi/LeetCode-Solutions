class Solution {
public:
    char findTheDifference(string s, string t) {
        int len1 = s.length();
        int len2 = t.length();
        unordered_map<char, int> u_map;
        
        for(char c : s) u_map[c]++;
        
        for(char c : t) u_map[c]--;        
        
        for(auto it : u_map) {
            if(u_map[it.first] != 0) return it.first;
        }
        
        return 'a';
    }
};