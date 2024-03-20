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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* first = list1;
        ListNode* second = list2;
        ListNode* anslist = new ListNode(-1);
        ListNode* mover = anslist;
        while (first != NULL && second != NULL) {
            if (first->val <= second->val) {
                ListNode* temp = new ListNode(first->val);
                mover->next = temp;
                mover = temp;
                first = first->next;
            } else if (first->val > second->val) {
                ListNode* temp = new ListNode(second->val);
                mover->next = temp;
                mover = temp;
                second = second->next;
            }
        }
        while (first != NULL) {
            ListNode* temp = new ListNode(first->val);
            mover->next = temp;
            mover = temp;
            first = first->next;
        }
        while (second != NULL) {
            ListNode* temp = new ListNode(second->val);
            mover->next = temp;
            mover = temp;
            second = second->next;
        }
        return anslist->next;
    }
};