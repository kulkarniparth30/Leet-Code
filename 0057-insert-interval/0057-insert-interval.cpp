class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& a, vector<int>& b) {
        
        vector<vector<int>> res;
        int i = 0;
        int n = a.size();

        int start2 = b[0];
        int end2 = b[1];

        while (i < n && a[i][1] < start2){
            res.push_back(a[i]);
            i++;
        }
        // merge overlapping intervals

        while(i < n && a[i][0]<= end2){

            start2 = min(a[i][0] , start2);
            end2 = max(a[i][1] , end2);
            i++;
        }
        res.push_back({start2 , end2});

        // remaining intervals
        while(i < n){
            res.push_back(a[i]);
            i++;
        }
        return res;
    }
};