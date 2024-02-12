class Solution {
public:
    string defangIPaddr(string address) {
        vector<char> ans;
        int index=0;
        while(index<address.size())
        {
            if(address[index]=='.')
            {
                ans.push_back('[');
                ans.push_back('.');
                ans.push_back(']');
            }
            else ans.push_back(address[index]);
            index++;
        }
        address.clear();
        for(int i=0;i<ans.size();i++)
        {
            address+=ans[i];
        }
        return address;
    }
};