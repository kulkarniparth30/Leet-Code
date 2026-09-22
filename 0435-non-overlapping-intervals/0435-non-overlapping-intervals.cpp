class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& a) {
        
        sort(a.begin() , a.end(),
        [](vector<int>& x , vector<int> & y){
            return x[1] < y[1];
        });

        int count = 0;
        int end1 = a[0][1];

        for(int i = 1 ; i < a.size() ; i++){

            int start2 = a[i][0];
            int end2 = a[i][1];

            if(start2 < end1){
                count++;  // overlapping
            }
            else{
                end1 = end2 ;   // non-overlapping
            }
        }
        return count;
    }
};