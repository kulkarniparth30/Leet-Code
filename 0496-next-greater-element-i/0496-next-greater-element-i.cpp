class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        int n = nums2.size();

        vector<int> res(n , -1);
        stack<int> st;

        for(int i=0 ; i<n ; i++){

            while(!st.empty() && nums2[i] > nums2[st.top()]){

                res[st.top()] = nums2[i];
                st.pop();
            }
            st.push(i);
        }

        vector<int> ans;

        for(int i=0 ; i < nums1.size(); i++){
            for(int j=0 ; j<nums2.size() ; j++){

                if(nums1[i] == nums2[j]){

                    ans.push_back(res[j]);
                    break;
                }
            }
        }
        return ans;
    }
};