class Solution {
public:
    int search(vector<int>& nums, int target) {
        //array dynamic
        // size of array
          int n=nums.size();
        int l=0,h=n-1;
        while(l<=h){
            int mid=(h+l)>>1;
            if(nums[mid]==target) return mid;
            else if(nums[mid]<target) l=mid+1;
            else h=mid-1;
        }
        return -1;
    }
};