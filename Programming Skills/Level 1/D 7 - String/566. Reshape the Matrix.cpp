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
    }
};