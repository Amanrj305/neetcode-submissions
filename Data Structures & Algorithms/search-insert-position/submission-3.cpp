class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       int index = nums.size();
        int low =0, high = nums.size()-1;
        while(low<=high){
            int mid = (low+high)/2;

            if(nums[mid]<target){
                low = mid+1;
            }
            else if(nums[mid]>target){
                index = mid;
                high = mid-1;
            }
            else{
                return mid;
            }
        }
        return index;
    }
};