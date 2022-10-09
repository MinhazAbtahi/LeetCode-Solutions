class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size = nums.size();
        unordered_map<int, int> umap;
        
        for(int i : nums) umap[i]++;
        
        for(auto i : umap) {
            if(i.second > size / 2) return i.first;
        }
        
        return 0;
    }
};