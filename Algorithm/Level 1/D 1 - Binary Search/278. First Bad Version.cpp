// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:    
    int firstBadVersion(int n) {
        int ans = 1;
        int low = 0;
        int high = n;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
        
            if(isBadVersion(mid)) {
                high = mid - 1;
                ans = mid;
            }       
            else {
                low = mid + 1;
            }   
        }
        
        return ans;
    }
};