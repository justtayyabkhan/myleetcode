class Solution {
public:
    string customSortString(string order, string s) {
     string ans;
     for(int i=0;i<order.size();i++)
     {
         char c=order[i];
         for(int j=0;j<s.size();j++)
         {
             if(s[j]==c) ans+=c;
         }
     }
     int index=0;
     int sz=ans.size();
     bool flag=false;
     while((index)<s.size()) 
     {
         char c=s[index];
         for(int i=0;i<sz;i++)
         {
             flag=false;
           if(ans[i]==c) 
           {
               flag=true;  
               break;
         }
         }
         if(flag==false) ans+=c;
         index++;

     }
    return ans;
    }

};