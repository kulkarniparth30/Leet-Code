class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        if(nums.size() == 0)
            return {};

        vector<int> pre (nums.size());

        pre[0] = nums[0];
        
        for(int i = 1 ; i < nums.size() ; i++){
            pre[i] = pre[i - 1] + nums[i];
        }

        return pre;
    }
    
};