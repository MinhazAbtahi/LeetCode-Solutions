class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if (s.empty()) return {};
        vector<int> res, cnt(128, 0);
        int ns = s.size(), np = p.size(), i = 0;
        for (char c : p) ++cnt[c];
        while (i < ns) {
            bool success = true;
            vector<int> tmp = cnt;
            for (int j = i; j < i + np; ++j) {
                if (--tmp[s[j]] < 0) {
                    success = false;
                    break;
                }
            }
            if (success) {
                res.push_back(i); 
            }
            ++i;
        }
        return res;
        
        /*
        // TLE
        int len1 = s.size();
        int len2 = p.size();
        if(len2 > len1) return {};
        
        vector<int> res;
        
        sort(p.begin(), p.end());
        
        for(int i = 0; i < len1 - (len2-1); i++){
            string s1 = s.substr(i, p.size());
            
            sort(s1.begin(), s1.end());
            
            if(s1 == p) res.push_back(i);
        }
        
        return res;
        */
    }
};