class Solution {
public:
    bool findele(vector<int> arr,int target)
    {
        int low=0;
        int high=arr.size()-1;
        bool ans=false;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(arr[mid]==target)
            {
                return true;
            }
            else if(arr[mid]>target) high=mid-1;
            else low=mid+1;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        bool ans=false;
        for(int i=0;i<m;i++)
        {
            ans=findele(matrix[i],target);
            if(ans==true) return true;
        }
        return ans;
    }
};