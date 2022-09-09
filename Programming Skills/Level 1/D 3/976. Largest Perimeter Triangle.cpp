class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int size = nums.size();
        sort(nums.begin(), nums.end());
        
        for (int i = size-1; i > 1; i--) {
            if(nums[i] < nums[i-1] + nums[i-2]) {
                return nums[i] + nums[i-1] + nums[i-2];
            }
        }
        return 0;
    }
};