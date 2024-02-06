class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        int high=INT_MIN;
        for(int i=0;i<n;i++)
        {
            high=max(high,arr[i]);
        }
        high=high+k;
        vector<int> hasharr;
        for(int i=0;i<=high;i++)
        {
            hasharr.push_back(0);
        }
        hasharr[0]=1;
        for(int i=0;i<n;i++)
        {
            hasharr[arr[i]]++;
        }
        int count=0;
        for(int i=1;i<=high;i++)
        {
            if(hasharr[i]!=1)
            {
                count++;
                if(count==k) return i;
            }
        }
        return -1;
    }
};