class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int size = numbers.size();
        unordered_map<int, int> umap;
        vector<int> res;
        
        for(int i = 0; i < size; i++) {
            int complement = target - numbers[i];
            if(umap.find(complement) != umap.end()) {
                res.push_back(umap[complement] + 1);
                res.push_back(i + 1);
                return res;
            }
            
            umap.insert(make_pair(numbers[i], i));
        }
        
        return res;
    }
};