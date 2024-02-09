class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        for(int i=0;i<n2;i++)
        {
            nums1.push_back(nums2[i]);
        }
        int n3=nums1.size();
        sort(nums1.begin(),nums1.end());
        double long res=-1.0;
        if(n3%2==0)
        {
            res=((double)(nums1[(n3/2)-1])+(double)(nums1[(n3/2)]))/2;
        }
        else res=nums1[((n3+1)/2)-1];
        return res;

    }
};