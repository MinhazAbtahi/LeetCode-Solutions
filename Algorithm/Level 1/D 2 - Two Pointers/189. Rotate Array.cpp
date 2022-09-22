class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        vector<int> res(nums);
        
        for(int i = 0; i < size; i++) {
            nums[(i+k) % size] = res[i];
        }
    
        /*
        // TLE
        int size = nums.size();
        k = k % size;
        
        while(k > 0) {
            int prev = nums[size - 1];
            for(int i = 0; i < size; i++){
                swap(nums[i], prev);
            }
            k--;
        }
        */
    }
};