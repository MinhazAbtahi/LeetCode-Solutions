class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashMap;
        vector<int> ans;
        
        for(int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if(hashMap.find(complement) != hashMap.end()) {
                ans.push_back(hashMap[complement]);
                ans.push_back(i);
                return ans;
            }
            hashMap.insert(make_pair(nums[i], i));
        }
        
        return ans;
    }
};