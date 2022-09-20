class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        int size = words.size();
        unordered_map<string, int> wordsMap;
        vector<pair<string, int>> word_cnt;
        
        for(string s : words) wordsMap[s]++;
        
        for (auto x : wordsMap)
        {
            word_cnt.emplace_back(x.first, x.second);
        }
        
        sort(word_cnt.begin(), word_cnt.end(), 
             [](pair<string, int>& a, pair<string, int>& b)
             {
                 if (a.second > b.second)  return true;
                 else if (a.second == b.second && a.first < b.first) return true;
                 else return false;
             });
        
        vector<string> ret(k);
        
        for (int i = 0; i < k; ++i)
        {
            ret[i] = word_cnt[i].first;
        }
        
        return ret;
    }
};