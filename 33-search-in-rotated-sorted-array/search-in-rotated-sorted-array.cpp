class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        int ans=-1;
        //PIVOT
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]==target) 
            {
            ans=mid;
            return ans;
            }
            if(nums[low]<=nums[mid])
            {
                if(target<=nums[mid] && target>=nums[low])
                {
                    high=mid-1;
                }
                else low=mid+1;
            }
            else
            {
                if(target>=nums[mid] && target<=nums[high])
                {
                    low=mid+1;
                }
                else high=mid-1;

            }
        }
        return ans;
        
    }
};