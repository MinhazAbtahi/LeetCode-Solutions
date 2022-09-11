class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int x1 = coordinates[1][1] - coordinates[0][1];
        int y1 = coordinates[1][0] - coordinates[0][0];
        
        for(int i = 2; i < coordinates.size(); i ++){
            int y = coordinates[i][1] - coordinates[0][1];
            int x = coordinates[i][0] - coordinates[0][0];
            
            if(y * y1 != x * x1) return false;
        }
        return true;
        
        /*
        if(coordinates.size() == 2) return true;
        
        int x0 = coordinates[0][0];
        int y0 = coordinates[0][1];
        
        int x1 = coordinates[1][0];
        int y1 = coordinates[1][1];
        
        int dx = x0 - x1;
        int dy = y0 - y1;
        
        for(int i = 2; i < 9; i++) {
            int x = coordinates[i][0];
            int y = coordinates[i][1];
            
            if(dy * (x - x0) != dx * (y - y0)) return false;
        }
        
        return true;
        */
    }
};