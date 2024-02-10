class Solution {
public:
bool findel(vector<int> &arr,int target)
{
    int sz=arr.size();
    int low=0;
    int high=sz-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==target) return true;
        else if(arr[mid]>target) high=mid-1;
        else low=mid+1;
    }
    return false;

}
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++)
        {
            if(findel(matrix[i],target)==true) return true;
            else continue;
        }
        
    return false;
    }
};