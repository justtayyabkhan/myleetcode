class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<char> chararr(27,0);
        for(int i=0;i<sentence.size();i++)
        {
            chararr[(int)sentence[i]-97]++;
        }
        bool ans=true;
        for(int i=0;i<26;i++)
        {
            if(chararr[i]==0)
            {
                return false;
            }
            else ans=true;
        }
        return ans;
        
        
    }
};