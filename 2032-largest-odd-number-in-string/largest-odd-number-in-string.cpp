class Solution {
public:
    
    string largestOddNumber(string s) {
        int num=s.size();
        string ans="";
        while(num>=0)
        {
            int digit=s[num]-'0';
            if(digit%2==1)
            { int i=0;
                while(num>=i)
                {
                    ans+=s[i];
                    i++;
                }
                break;
            }
            else num--;
        }
        return ans;
    }
};