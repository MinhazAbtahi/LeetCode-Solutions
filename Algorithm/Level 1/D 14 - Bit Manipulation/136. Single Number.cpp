class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //Bitwise
        int res = 0;
        
        for(int n: nums) res = res ^ n;
        
        return res;
        
        
        /* 
        // Iterative
        unordered_map<int, int> umap;
        
        for(int c : nums) umap[c]++;
        
        for (auto it : umap) {
            if(it.second == 1) return it.first;
        }
        
        return 0;
        */
    }
};