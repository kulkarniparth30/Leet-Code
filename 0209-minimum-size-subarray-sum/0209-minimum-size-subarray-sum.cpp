class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minLen = INT_MAX;
        int sum = 0;
        int i = 0;

        for (int j = 0 ; j < nums.size(); j++){
            sum = sum + nums[j];

            while (sum >= target){
                minLen = min(minLen , j - i + 1);
                sum = sum - nums[i];
                i = i + 1;
            }
        }
        return minLen == INT_MAX ? 0 : minLen;
    }
};