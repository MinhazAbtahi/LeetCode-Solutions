class Solution {
public:
    bool binarySearch1D(vector<int>& arr, int l, int h, int x) // low, high, target
    {
        while (l <= h) {
            int m = l + (h - l) / 2;
            if (x == arr[m]) return true;
            if (x > arr[m]) l = m + 1;   
            else h = m - 1;                                  
        }
        return false;       
    }    
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l = 0;
        int h = matrix.size() - 1;
        int n = matrix[0].size();
        
        while(l <= h) {
            int m = l + (h - l) / 2;
            
            if(target >= matrix[m][0] && target <= matrix[m][n-1]) {
                return binarySearch1D(matrix[m], 0, n, target);
            }
            
            if (target > matrix[m][0]) l = m + 1;   
            else h = m - 1;   
        }
        
        return false;
    }    
};