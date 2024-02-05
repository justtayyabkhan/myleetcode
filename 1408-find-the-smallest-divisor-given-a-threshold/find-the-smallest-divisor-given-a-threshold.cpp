class Solution {
public:
    int divisor(vector<int>& nums, int threshold,int mid)
    {
        int res=0;
        int ans=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            ans+=ceil((double)nums[i]/(double)mid);
        }
        return ans;

    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int low=1;
        int high=INT_MIN;
        int res=-1;
        for(int i=0;i<n;i++)
        {
            // low=min(low,nums[i]);
            high=max(high,nums[i]);
        }
        int ans=0;
        while(low<=high)
        {
            ans=0;
            int mid=(low+high)/2;
            ans=divisor(nums,threshold,mid);
            if(ans<=threshold)
            {
            res=mid;
            high=mid-1;
            }
            else if(ans>threshold) 
            {
            low=mid+1;
            }


        }
        return res;
    }
};