class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> vect;
        
        if(numRows <= 0)
            return vect;
        
        for (int i = 0; i < numRows; ++i) {
            vect.push_back({});
            for (int j = 0; j <= i; ++j) {
                if (j == 0 || j == i) {
                    vect[i].emplace_back(1);
                } else {
                    vect[i].emplace_back(vect[i - 1][j - 1] +
                                           vect[i - 1][j]);
                }
            }
        }
        return vect;
    }
};