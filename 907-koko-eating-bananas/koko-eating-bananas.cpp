class Solution {
public:
    long long hours(vector<int>& piles, int h){
        long long totalhour=0;
        int n=piles.size();
        for(int i=0;i<n;i++)
            {
                 totalhour+=ceil((double)piles[i]/(double)h);
            }
        return totalhour;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int maxel=INT_MIN;
        for(int i=0;i<n;i++)
        {
            maxel=max(maxel,piles[i]);
        }
        int low=1;
        int high=maxel;
        long long ans=0;
        int val=0;
        while(low<=high)
        {
            int mid=(low+high)/2;
            ans=hours(piles,mid);
            if(ans<=h) high=mid-1;
            else low=mid+1;
            val=low;
        }
        return val;
    }
};