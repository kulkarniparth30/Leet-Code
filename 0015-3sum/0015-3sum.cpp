class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        int n = a.size();
        sort(a.begin() , a.end());
        vector<vector<int>> result;

        for (int i=0 ; i < n-2 ; i++){
            if(i > 0 && a[i] == a[i-1])
            continue ;  // skip dupliacte first elemnt

            int left=i+1 , right=n-1;

            while(left < right){
                int s =a[i] + a[left] + a[right];

                if(s==0){
                    result.push_back({a[i] , a[left] , a[right]});
                    left++;
                    right--;

                    // skip[ duplicates
                    while (left < right && a[left] == a[left - 1]) left++;
                    while(left < right && a[right] == a[right + 1]) right--;
                }
                else if (s < 0){
                    left++; //sum is small , require bigger number
                }
                else{
                    right--;  // sum to big , require smaller number
                }
            }
        }
        return result;
    }
};