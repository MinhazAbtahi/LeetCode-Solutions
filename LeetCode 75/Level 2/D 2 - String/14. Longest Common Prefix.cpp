class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int size = strs.size();
        
        if(size == 1) return strs[0];
        
        string str = "";
        char c;
        
        for(int i = 0; i < strs[0].length(); i++) {
            for(int j = 1; j < size; j++) {
                string s = strs[j];
                c = s[i];
                if ((s.length() == i) || (c != strs[0][i])) return str;
            }
            str += c;
        }
        
        return str;
    }
};