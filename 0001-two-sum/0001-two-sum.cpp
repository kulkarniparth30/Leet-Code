class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int , int> np;

        for (int i = 0 ; i < nums.size() ; i++){

            int needed = target - nums[i];

            if(np.find(needed) != np.end()){
                return {np[needed] , i};
            }
            np[nums[i]] = i;
        }
        return {};
    }
};