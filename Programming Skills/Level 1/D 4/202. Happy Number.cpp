class Solution {
public:
    bool isHappy(int n) {       
        set<int> s;
        int digit = 0;
        int sum = 0;
        
        while(s.count(n)==0)
        {
            if(n==1) return true;
            
            s.insert(n);
            sum = 0;
            
            while(n)
            {
                digit = n % 10; 
                sum += digit * digit;
                n /= 10;
            }
            n=sum;
        }
        return false;
    }
};