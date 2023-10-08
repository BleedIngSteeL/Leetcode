class Solution {
private:
    bool binarySearch(vector<int> ans, int target){
        int s=0;
        int e=ans.size()-1;
        int mid=s+ (e-s)/2;
        while(s<=e){
            if(ans[mid]==target){
                return true;
            }
            else if(ans[mid]<target){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return false;
    }    
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0,j=0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]==nums2[j]){
                if(binarySearch(ans,nums1[i])==false){
                    ans.push_back(nums1[i]);
                }
                
                i++;
                j++;
            }
            else if(nums1[i]>nums2[j]){
                j++;
            }
            else if(nums1[i]<nums2[j]){
                i++;
            }
        }
        return ans;
        
    }
};
