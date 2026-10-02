class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int first = -1;
        int last = -1;

        // first occurance

        int low = 0;
        int high = nums.size() - 1;

        while(low <= high){

            int mid = low + (high - low) / 2;

            if(nums[mid] == target){
                first = mid;
                high = mid - 1;  // go left (we found first occurance there may be one target in left so go left)
            }
            else if (nums[mid] < target){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }

        // second occurance

        low = 0;
        high = nums.size() - 1;

        while(low <= high){

            int mid = low + (high - low) / 2;

            if(nums[mid] == target){
                last = mid;
                low = mid + 1;  // go right
            }
            else if (nums[mid] < target){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return {first , last};
    }
};