class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int size1 = nums1.size();
        int size2 = nums2.size();
        vector<int> res;
        
        for(int i = 0; i < size1; i++) {
            
            for(int j = 0; j < size2; j++) { 
                
                if(nums1[i] == nums2[j]) {
                    int k = 0;
                    
                    for(k = j + 1; k < size2; k++) { 
                        if(nums2[k] > nums2[j]) {
                            res.push_back(nums2[k]);
                            break;
                        }                      
                    }
                    
                    if(k == size2) res.push_back(-1);
                }
            }
        }
        
        return res;
    }
};