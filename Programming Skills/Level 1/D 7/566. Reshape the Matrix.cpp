class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> reshaped(r, vector<int>(c));
        int m = mat.size();
        int n = mat[0].size();
        
        if(r * c != m * n) return mat;
        
        for (int i = 0; i < r * c; i++) {
            reshaped[i/c][i%c] = mat[i/n][i%n];
        }
        
        return reshaped;
        
        /* 
        // detailed
        if(nums == null || nums.length == 0 || nums[0] == null || nums[0].length == 0)
            return nums;

        int m = nums.length;
        int n = nums[0].length;

        if(m * n != r * c)
            return nums;

        int[][] res = new int[r][c];
        for(int i = 0; i < m * n; i++) {
            int row = i / n;
            int col = i % n;

            int newRow = i / c;
            int newCol = i % c;

            res[newRow][newCol] = nums[row][col];
        }

        return res;
        */
    }
};