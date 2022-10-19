class Solution {
public:
    void backtrack(vector<vector<int>>& result, vector<int>& current, vector<int>& nums){
        if(current.size() == nums.size()){
            result.push_back(current);
            return;
        }
        
        for(int e : nums){
            if(find(current.begin(), current.end(), e) != current.end()){
                continue;
            }
            current.push_back(e);
            backtrack(result, current, nums);
            current.pop_back();
        } 
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> current;
        
        backtrack(result, current, nums);
        
        return result;
    }
};