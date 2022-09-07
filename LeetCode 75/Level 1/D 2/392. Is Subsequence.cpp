class Solution {
public:
    bool isSubsequence(string s, string t) {
        int len = s.length();
        int size = t.length();
        int x = 0;
        
        for (int i = 0; i < size; i++) {
            if(s[x] == t[i]) x++;
            if(x == len) return true;
        }
        
        return false;
    }
};