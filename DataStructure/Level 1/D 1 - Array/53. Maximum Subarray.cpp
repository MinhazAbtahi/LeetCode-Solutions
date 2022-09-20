class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        /// Kadane's Algorithm
        
        int sum = 0;
        int _max = INT_MIN;
        
        for (auto it : nums) {
            sum += it;
            _max = max(sum, _max);
            if(sum < 0) sum = 0;
        }
        return _max;
    }
};