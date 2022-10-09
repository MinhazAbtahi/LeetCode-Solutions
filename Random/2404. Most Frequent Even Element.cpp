class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int, int> umap;
        int _max = -1;
        int ans = -1;
        
        for(int i : nums) umap[i]++;
                     
        for(auto i : umap) {
            if(i.first % 2 == 0 && i.second > _max) {
                _max = i.second;
                ans = i.first; 
            }            
        }
        
        return ans;
    }
};