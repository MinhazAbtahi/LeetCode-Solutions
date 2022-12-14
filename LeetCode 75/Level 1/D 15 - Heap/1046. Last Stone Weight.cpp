class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq(stones.begin(), stones.end());
        int a, b = 0;
        
        while(!pq.empty()) {
            if(pq.size() > 1) {
                a = pq.top();
                pq.pop();
                b = pq.top();
                pq.pop();
                int diff = a - b;
                pq.push(diff);
            }
            if(pq.size() == 1) {
                return pq.top();
            }
        }
        
        return 0;
    }
};