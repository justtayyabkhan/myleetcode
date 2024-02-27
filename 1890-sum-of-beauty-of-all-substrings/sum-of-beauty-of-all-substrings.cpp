class Solution {
public:
    int beauty(vector<int>& arr)
    {
        int maxx=-1;
        int minn=1e9;
        for(int i=0;i<26;i++)
        {
            maxx=max(maxx,arr[i]);
           if(arr[i]>=1)
           {
               minn=min(minn,arr[i]);
           }
        }
        return maxx-minn;
    }
    int beautySum(string s) {
    int res=0;
    for(int i=0;i<s.size();i++)
    {
        vector<int> arr(26,0);
        for(int j=i;j<s.size();j++)
        {
           arr[s[j]-'a']++;
           res+=beauty(arr); 
        }
    }
    return res;
    }
};