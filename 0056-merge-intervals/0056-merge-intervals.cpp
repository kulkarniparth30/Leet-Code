class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a) {
        vector<vector<int>> res;
        int n = a.size();
        sort(a.begin() , a.end());
        int start1 = a[0][0];
        int end1 = a[0][1];

        for (int i = 1 ; i < n ; i++){
            int start2 = a[i][0];
            int end2 = a[i][1];

            if(end1 >= start2){  // merge 
                start1 = start1;
                end1 = max(end1 , end2);
                continue;
            }

            // if not required to merge
            res.push_back({start1 , end1});
            start1 = start2;
            end1 = end2;
        }
        res.push_back({start1 , end1});
        return res;
    }
};