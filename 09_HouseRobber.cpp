class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n+1);
        
        int prev2= 0;
        int prev1 = nums[0];
        for(int i = 2; i<=n;i++){
            int right = nums[i-1]+prev2;
            int left  = 0+ prev1;
            int curri = max(right , left);
            prev2 = prev1;
            prev1 = curri;


        }
        return prev1;

        
        
    }
};
