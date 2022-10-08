class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int length = nums.size();
        int count = 0;
        
        for(int i = 0; i < length; i++) {
            if(val == nums[i]) continue;
            
            nums[count] = nums[i];
            count++;
        }
        
        return count;
    }
};