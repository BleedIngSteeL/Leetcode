//KADANE'S ALGORITHM
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cmax=0;
        int omax=INT_MIN;
        int n=nums.size();

        for(int i=0;i<n;i++){
            if(cmax<0){
                cmax=nums[i];
            }
            else{
                cmax=cmax+nums[i];
            }
            omax=max(cmax,omax);
        }
        return omax;
        
    }
};
