class Solution {
public:
    bool isAnagram(string s, string t) {
        int len = s.length();
        
        if(len != t.length()) return false;
        
        unordered_map<char, int> u_map;
        
        for(int i = 0; i < len; i++) {
            u_map[s[i]]++;
            u_map[t[i]]--;
        }
        
        // for(auto it : u_map) {
        //     if(it.second != 0) return false;
        // }
        
        for(int i = 0; i < u_map.size(); i++) {
            if(u_map[s[i]] != 0) return false;
        }
        
        return true;
    }
};