class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int n=nums.size();
        int maximum=nums[0];
        int minimum=nums[0];
        
        for (int i=0; i<n; i++) {
            maximum=max(maximum,nums[i]);
            minimum=min(minimum,nums[i]);
        }

        int diff=maximum-minimum;

        if (diff<=2*k) return 0;
        return diff-2*k;
        
    }
};
