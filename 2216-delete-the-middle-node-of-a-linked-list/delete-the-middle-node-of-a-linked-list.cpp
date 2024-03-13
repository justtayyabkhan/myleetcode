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
ListNode *deleteindex(ListNode *head, ListNode* mid)
{
    if (head == NULL)
        return head;
    if (head == mid)
    {
        head = head->next;
        return head;
    }
    ListNode *temp = head;
    ListNode *prev = NULL;
    while (temp != NULL)
    {
        if (temp == mid)
        {
            prev->next = prev->next->next;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return deleteindex(head,slow);

    }
};