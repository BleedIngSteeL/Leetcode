//  brute force 
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        bool ans=false;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]==nums[i]){
                ans=true;
            }
        }
        return ans;       
    }
    
};




// by hashing 

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mpp;
        bool ans=false;
        for(int i=0;i<nums.size();i++){
           if(mpp.find(nums[i])!=mpp.end()){
            ans=true;
            }
            mpp[nums[i]]++;
        }
        return ans;       
    }
    
};
