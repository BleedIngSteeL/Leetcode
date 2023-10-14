class Solution {
public:
    int smallestRangeII(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int maxi=nums[n-1];
        int mini=nums[0];
        int res=maxi-mini;

        for(int i=1;i<n;i++){
            maxi=max(nums[i-1]+k,nums[n-1]-k);
            mini=min(nums[i]-k,nums[0]+k);
            res=min(res,maxi-mini);
        }
        return res;
    }       
};
