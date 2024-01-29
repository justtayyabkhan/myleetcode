class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int start,end;
        int prdresult=-15151451;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int prd=1;
            if(n==1) 
            {return nums[0];}
            else
            {

            for(int j=i;j<n;j++)
            {
                prd*=nums[j];
                if(prd>prdresult)
                {
                    prdresult=prd;
                }
            }
            }
        }
        
        return prdresult;
    }
};