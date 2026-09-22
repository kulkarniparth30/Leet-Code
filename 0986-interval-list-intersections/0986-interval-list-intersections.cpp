class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& a, vector<vector<int>>& b ) {
        
        vector<vector<int>> res;

        int i = 0;
        int j = 0;

        while(i < a.size() && j < b.size()){

            int start1 = a[i][0];
            int end1 = a[i][1];

            int start2 = b[j][0];
            int end2 = b[j][1];

            int start = max(start1 , start2);
            int end = min(end1 , end2);

            if(end >= start){
                res.push_back({start , end});   
            }
            // move interval to the end
            if(end1 < end2){
                i++;
            }
            else{
                j++;
            }
        }
        return res;
    }
};