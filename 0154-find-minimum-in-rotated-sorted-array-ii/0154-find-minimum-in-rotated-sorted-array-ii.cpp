class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int low = 0;
        int high = nums.size() - 1;

        while(low < high){

            int mid = low + (high - low) / 2;

            if(nums[mid] > nums[high]){
                // minimum is on right
                low = mid + 1;
            }
            else if(nums[mid] < nums[high]){
                // minimum is left or mid
                high = mid;
            }
            else{
                // don't know
                high --;
            }
        }
        return nums[low];
    }
};