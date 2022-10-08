class Solution {
public:
    int binarySearch(vector<int> nums, int low, int high, int target) {
        if(low <= high) {
            int mid = low + (high - low) / 2;
        
            if(nums[mid] == target) return mid;
        
            if(target > nums[mid]) return binarySearch(nums, mid + 1, high, target);
            
            return binarySearch(nums, low, mid - 1, target);
        }
            
        return -1;
    }
    
    int searchInsert(vector<int>& nums, int target) {
        int len = nums.size();
        int res = binarySearch(nums, 0, len - 1, target);
        
        if(res == -1) {
            if(target < nums[0]) return 0;
            if(target > nums[len-1]) return len;
            
            for(int i = 0; i < len-1; i++) {
                if(target > nums[i] && target < nums[i+1]) return i + 1;
            }
        }
        
        return res;
    }
};