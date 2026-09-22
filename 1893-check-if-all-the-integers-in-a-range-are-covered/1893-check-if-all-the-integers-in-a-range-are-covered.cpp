class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        
        for(int num =left ; num <= right ; num++){

            bool found = false;

            for (int i=0 ; i<ranges.size() ; i++){

                int start1 = ranges[i][0];
                int end1 = ranges[i][1];

                while(num >= start1 && num <= end1){

                    found = true;
                    break;
                }
            }
            if(found == false)
                return false;
        }
        return true;
    }
};