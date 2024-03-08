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
ListNode *deleteindex(ListNode *head, int k)
{
    if (head == NULL)
        return head;
    if (k == 1)
    {
        ListNode *temp = head;
        head = head->next;
        return head;
    }
    ListNode *temp = head;
    ListNode *prev = NULL;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        if (cnt == k)
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
        ListNode* temp=head;
        int sz=0;
        while(temp!=NULL)
        {
            temp=temp->next;
            sz++;
        }
        temp=head;
        int index=(sz/2)+1;
        return deleteindex(head,index);

    }
};