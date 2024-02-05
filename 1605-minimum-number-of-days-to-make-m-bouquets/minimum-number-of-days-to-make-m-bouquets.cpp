class Solution {
public:
int findbloom(vector<int>& bloomDay, int m, int k,int mid)
{
        int n=bloomDay.size();
        int counter=0;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(mid>=bloomDay[i])
            {
                counter=counter+1;
            }
            else if(mid<bloomDay[i]) {
                ans+=(counter/k);
                counter=0;

            }
        }
        ans+=counter/k;
            return ans;
   
}
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        long long test=(long)m*(long)k;
        if(test>n) return -1;
        int low=INT_MAX;
        int high=INT_MIN;
        int ans=0;
        for(int i=0;i<n-1;i++)
        {
            low=min(low,bloomDay[i]);
            high=max(high,bloomDay[i]);
        }
        int res=high;
        while(low<=high)
        {
            int mid=(low+high)/2;
            ans=findbloom(bloomDay,m,k,mid);
            if(ans>=m) 
            {
                high=mid-1;
                res=mid;
            }
            // else if(ans>m) 
            // {high=mid-1;
            // }
            else low=mid+1;

        }
        return res;
    }
};