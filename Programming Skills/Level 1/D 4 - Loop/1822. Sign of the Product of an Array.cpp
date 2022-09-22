class Solution {
public:  
    int arraySign(vector<int>& nums) {
        int size  = nums.size();
        int count = 0;;    
        
        for (int i = 0; i < size; i++) {
            if(nums[i] == 0) return 0;
            if(nums[i] < 0) count++;
        }
        
        return (count % 2) == 0 ? 1 : -1;
    }
};