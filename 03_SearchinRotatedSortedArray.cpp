class Solution {
public:

    int findPivotIndex(vector<int>& arr){
        int n=arr.size();
        int start=0;
        int end=n-1;
        int mid=start + (end-start)/2;

        while(start<=end){
            if(start==end){
                return start;
            }
            if(mid-1>=0 && arr[mid]<arr[mid-1]){
                return mid-1;
            }
            else if(mid+1<n && arr[mid]>arr[mid+1]){
                return mid;
            }
            else if(arr[start]>arr[mid]){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
            mid=start+(end-start)/2;

        }
        return -1;

    }

    int binarySearch(vector<int>& arr, int start, int end, int target){
        int mid= start + (end-start)/2;
        while(start<=end){
            if(target==arr[mid]){
            return mid;
        }
        else if(target>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid= start + (end-start)/2;

        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int pivotIndex=findPivotIndex(nums);
        int n=nums.size();
        int ans=-1;

        if(target>=nums[0] && target<=nums[pivotIndex]){
            ans=binarySearch(nums,0,pivotIndex,target);
        }
        else{
            ans=binarySearch(nums,pivotIndex+1,n-1,target);
        }
        return ans;

    }
};
