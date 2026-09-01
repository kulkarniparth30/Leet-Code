class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        int sum = 0;

        int i = 0;
        int j = 0;

        for (j=0 ; j<k ; j=j+1){
            sum = sum + nums[j];
        }
        int maxSum = sum;

        while (j < nums.size()){

            sum = sum + nums[j];
            sum = sum - nums[i];

            i = i + 1;
            j = j + 1;

            maxSum = std::max(maxSum , sum);
        }
        return (double)maxSum / k;
    }
};