class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>result;
        if(nums1.size() > nums2.size()){
            result.assign(nums1.begin(),nums1.end());
            for(int i = 0; i < nums2.size(); i++){
                result.push_back(nums2[i]);
                sort(result.begin(),result.end());
            }
        } else {
            result.assign(nums2.begin(),nums2.end());
            for(int i = 0; i < nums1.size(); i++){
                result.push_back(nums1[i]);
                sort(result.begin(),result.end());
            }
        }
        if(result.size()%2==0)
            return (result[result.size()/2]+result[result.size()/2-1])/2.0;
        else
            return result[result.size()/2];
    }
};