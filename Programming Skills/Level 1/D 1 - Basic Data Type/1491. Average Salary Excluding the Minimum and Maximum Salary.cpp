class Solution {
public:
    
    double average(vector<int>& salary) {
        int len = salary.size();
        int mn=INT_MAX,mx=INT_MIN,sum=0;
             
        if(len <= 2) return 0;
        else {
            for(int i = 0; i < len; i++) {
                sum += salary[i];
                mn = min(mn, salary[i]);
                mx = max(mx, salary[i]);
            } 
            
            double avg = (sum - mn - mx) / ((len - 2) * 1.0);
            return avg;
        }
    }
};