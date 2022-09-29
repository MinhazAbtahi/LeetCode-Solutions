class Solution {
public:
    string freqAlphabets(string s) {
        unordered_map<string, string> dict;
    
        for(int i = 1; i<=9; i++)
            dict[to_string(i)] = 'a' + i -1;
     
        for( int i = 10; i<=26; i++) dict[to_string(i)] = 'a' + i -1; string res; int i = s.size()-1; while(i>=0)
        {
            if(s[i]=='#')
            {
                i-=2;
                string key = s.substr(i,2);
                res=dict[key]+res;
            }
            else
                res=dict[s.substr(i,1)]+res;
 
            i--;
        }
     
        return res;
    }
};