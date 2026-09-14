class Solution {
public:
    int findMiddleIndex(vector<int>& a) {

        int left = 0;
        int sum = 0;

        // Total sum 
        for(int x : a)
            sum +=x;

        for (int i = 0 ; i < a.size() ; i++){
            int right = sum - a[i] - left;

            if (left == right)
                return i;

            left += a[i];
        }
        return -1;
    }
};