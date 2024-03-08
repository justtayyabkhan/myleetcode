/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* temp1=head;
        stack<int> st;
        int sz=0;
        while(temp1!=NULL)
        {
            st.push(temp1->val);
            temp1=temp1->next;
            sz++;
        }
        temp1=head;
        for(int i=0;i<sz;i++)
        {
            if(temp1->val!=st.top()) return false;
            temp1=temp1->next;
            st.pop();
        }
        return true;
    }
};