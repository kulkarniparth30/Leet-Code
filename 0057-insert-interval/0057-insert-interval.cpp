class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& a, vector<int>& b) {
        
        vector<vector<int>> res;
        int i = 0;
        int n = a.size();

        while (i < n && a[i][1] < b[0]){
            res.push_back(a[i]);
            i++;
        }
        // merge overlapping intervals

        while(i < n && a[i][0] <= b[1]){

            b[0] = min(b[0] , a[i][0]);
            b[1] = max(b[1] , a[i][1]);

            i++;
        }
        res.push_back(b);

        // remaining intervals
        while(i < n){
            res.push_back(a[i]);
            i++;
        }
        return res;
    }
};