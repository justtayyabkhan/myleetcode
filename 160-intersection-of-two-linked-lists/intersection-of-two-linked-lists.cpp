/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp1=headA;
        int sz1=0;
        ListNode* temp2=headB;
        int sz2=0;
        while(temp1!=NULL)
        {
            temp1=temp1->next;
            sz1++;
        }
        while(temp2!=NULL)
        {
            temp2=temp2->next;
            sz2++;
        }
        temp1=headA;
        temp2=headB;
        int diff=max(sz1,sz2)-min(sz1,sz2);
        if(sz1>sz2)
        {
            for(int i=0;i<diff;i++) temp1=temp1->next;
        }
        else if(sz1<sz2)
        {
           for(int i=0;i<diff;i++) temp2=temp2->next; 
        }
        while(temp1!=NULL && temp2!=NULL)
        {
            if(temp1==temp2) return temp1;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return NULL;

    }
};