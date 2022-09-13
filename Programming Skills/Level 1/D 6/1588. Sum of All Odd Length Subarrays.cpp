class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int size = arr.size();
        int sum = 0;
        
        for(int i = 0; i < size; i++) {
            for(int j = i; j < size; j+=2) { 
                for(int k = i; k <= j; k++) { 
                    sum += arr[k];
                }
            }
        }
        
        return sum;
    }
};