class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        
        int index = -1;
        int distance = INT_MAX;
        
        for (int i = 0; i < points.size(); i++) {
            if(x == points[i][0] || y == points[i][1]) {
                int curr_distance = abs(x - points[i][0]) + abs(y - points[i][1]);
                
                if(curr_distance < distance) {
                    distance = curr_distance;
                    index = i;
                }             
            }
        }
        
        return index;
    }
};