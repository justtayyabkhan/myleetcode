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
        ListNode* reversedLL=new ListNode(-1);
        ListNode* temp2=reversedLL;
        while(!st.empty())
        {
            ListNode* temp3=new ListNode(st.top());
            st.pop();
            temp2->next=temp3;
            temp2=temp3;
        }
        temp2=reversedLL->next;
        for(int i=0;i<sz;i++)
        {
            if(temp1->val!=temp2->val) return false;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return true;
    }
};