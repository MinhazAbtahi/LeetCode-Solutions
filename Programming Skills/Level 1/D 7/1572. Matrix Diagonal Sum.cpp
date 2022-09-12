class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int primary = 0, secondary = 0;
        int size = mat.size();
        
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if(i == j) primary += mat[i][j];
                
                if((i + j) == size - 1 && i != j) secondary += mat[i][j];
            }
        }
        
        return primary + secondary;
    }
};