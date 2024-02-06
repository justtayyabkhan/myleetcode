class Solution {
public:
    int sumfn(vector<int>& weights, int days,int mid)
    {
        int n=weights.size();
        int sum=0;
        int count=1;
        for(int i=0;i<n;i++)
        {
            if((sum+weights[i])<=mid)
            {
                sum+=weights[i];
                
            }
            else 
            {
            count=count+1;
            sum=weights[i];

            }
        }
        return count;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int low=INT_MIN;
        long long sum=0;
        for(int i=0;i<n;i++)
        {   sum+=weights[i];
            low=max(low,weights[i]);
        }
        int res=INT_MAX;
        int high=sum;
        while(low<=high)
        {
            int ans=0;
            int mid=(low+high)/2;
            ans=sumfn(weights,days,mid);
            if(ans<=days)
            {
                // res=min(es,mid);
                high=mid-1;
            }
            else
            { 
                // res=low;
                low=mid+1;
            }
            
        }
        return low;
    }
};