class Solution {
public:
    // Recursive
    int binarySearch(vector<int> nums, int low, int high, int target) {
        if(low <= high) {
            int mid = low + (high - low) / 2;
        
            if(nums[mid] == target) return mid;
        
            if(target > nums[mid]) return binarySearch(nums, mid + 1, high, target);
            
            return binarySearch(nums, low, mid - 1, target);
        }
            
        return -1;
    }
    
    // Iterative
    /*
    int binarySearch(vector<int> nums, int low, int high, int target) {
        while(low <= high) {
            int mid = low + (high - low) / 2;
        
            if(nums[mid] == target) return mid;
        
            if(target > nums[mid]) low = mid + 1;
        
            if(target < nums[mid]) high = mid - 1;
        }
            
        return -1;
    }
    */
    
    int search(vector<int>& nums, int target) {
        int size = nums.size();
        return binarySearch(nums, 0, size - 1, target);
    }
};