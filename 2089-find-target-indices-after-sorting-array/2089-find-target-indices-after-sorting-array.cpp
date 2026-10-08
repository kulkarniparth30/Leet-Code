class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        
        sort(nums.begin() , nums.end());

        int n = nums.size();

        int low = 0;
        int high = n - 1;

        int first = -1;
        int second = -1;

        // first occurance
        while(low <= high){

            int mid = low + (high - low) / 2;

            if(nums[mid] == target){
                first = mid;
                high = mid - 1;
            }
            else if(nums[mid] < target){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        
        low = 0;
        high = nums.size() - 1;

        // second occurance
        while(low <= high){

            int mid = low + (high - low) / 2;

            if(nums[mid] == target){
                second = mid;
                low = mid + 1;
            }
            else if(nums[mid] < target){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }

        vector<int> ans;

        if(first == -1)
            return ans;

        for(int i = first ; i <= second ; i++)
            ans.push_back(i);

        return ans;
    }
};