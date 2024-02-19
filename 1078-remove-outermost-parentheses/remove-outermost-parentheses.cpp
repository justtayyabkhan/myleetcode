class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string result;
        for (char i : s) {
            if (i == '(') {

                if (!st.empty()) {
                    result.push_back(i);
                }
                st.push(i);
            }
            else
            {
                st.pop();
                if(!st.empty())
                {
                    result.push_back(')');
                }
            }
        }
        return result;
    }
};