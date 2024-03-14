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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL || head->next==NULL) return NULL;
        int sz=0;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            sz++;
            temp=temp->next;
        }
        int el=sz-n;
        if(sz==n) 
        {
            ListNode* newhead=head->next;
            delete(head);
            return newhead;
            }
        temp=head;
        while(temp!=NULL)
        {
            el--;
            if(el==0) break;
            temp=temp->next;
        }
        ListNode* deletednode=temp->next;
        temp->next=temp->next->next;
        delete(deletednode);
        return head;
    }
};