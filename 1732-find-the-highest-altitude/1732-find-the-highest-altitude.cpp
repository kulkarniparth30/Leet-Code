class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        
        int current = 0;
        int  highest = 0;

        for (int i =0 ; i < gain.size() ; i++){

            current +=gain[i];

            highest = max(current , highest);
        }
        return highest;
    }
};