class Solution {
public:
    string toLowerCase(string s) {
        int len = s.length();
        string str;
        
        for(int i = 0; i < len; i++) {
            if(s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = (s[i] - 'A' + 'a'); 
            }
        }
        
        return s;
        
        // STL function to transform all-lowercase.
        //transform(s.begin(),s.end(),s.begin(),::tolower);  
        //return s;
    }
};