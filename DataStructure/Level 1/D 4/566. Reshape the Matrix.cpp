class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> reshaped(r, vector<int>(c));
        
        if(r * c != mat.size() * mat[0].size()) return mat;
        
        for (int i = 0; i < r * c; i++) {
            reshaped[i/c][i%c] = mat[i/mat[0].size()][i%mat[0].size()];
        }
        
        return reshaped;
    }
};