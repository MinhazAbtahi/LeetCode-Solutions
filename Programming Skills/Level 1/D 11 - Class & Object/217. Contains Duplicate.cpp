class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> map;
        
        int len =  nums.size();
        
        for (int i = 0; i < len; i++) {
            int n = nums[i];
            map[n]++; 
            if(map[n] > 1) return true;
        }
        
        return false;
        
        /*
        unordered_map<int, bool> map;
        int len =  nums.size();
        
        for (int i = 0; i <len; i++) {
            if (map.count(nums[i])) {
                return true;
            }
            else {
                map[nums[i]] = true;
            }
        }
        return false;
        */
    }
};