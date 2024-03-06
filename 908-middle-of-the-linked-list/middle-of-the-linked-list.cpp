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
    ListNode* middleNode(ListNode* head) {
        if(head==NULL) return head;
        ListNode* temp=head;
        int cnt=0;
        while(temp!=NULL)
        {
            cnt++;
            temp=temp->next;
        }
        if(cnt%2==1) cnt=(cnt/2)+1;
        else cnt=cnt/2+1;
        int cnt2=0;
        temp=head;
        while(temp!=NULL)
        {
            cnt2++;
            if(cnt==cnt2) return temp;
            temp=temp->next;
        }
        return temp;
        
    }
};