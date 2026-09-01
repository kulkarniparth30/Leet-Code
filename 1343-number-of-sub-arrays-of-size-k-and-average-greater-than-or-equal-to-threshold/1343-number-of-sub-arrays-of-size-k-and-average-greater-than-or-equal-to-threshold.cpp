class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum = 0 ;
        int count = 0;

        int i = 0 ;
        int j = 0;

        for(j = 0 ; j<k ; j=j+1){
            sum = sum + arr[j];
        }

        if(sum >= k * threshold){
            count = count + 1;
        }

        while (j < arr.size()){
            sum = sum + arr[j];
            sum = sum - arr[i];

            i = i + 1;
            j = j + 1;

            if (sum >= k * threshold){
                count = count + 1;
            }

        }
        return count;
    }
};