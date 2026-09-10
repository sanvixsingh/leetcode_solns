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
    ListNode* reverseList(ListNode* head) {
        if (head == NULL) {
            return NULL;
        }
        if (head->next == NULL) {
            return head;
        }
        if (head->next->next == NULL) {
            ListNode* temp = head->next;
            temp->next = head;
            head->next = NULL;
            return temp;
        }
        if (head->next->next->next == NULL) {
            ListNode* temp = head->next;
            ListNode* prev = head;
            ListNode* along = head->next->next;
            along->next = temp;
            temp->next = prev;
            prev->next = NULL;
            return along;
        }
        ListNode* temp = head->next;
        ListNode* prev = head;
        ListNode* along = head->next->next;
        prev->next = NULL;
        do {
            temp->next = prev;
            prev = temp;
            temp = along;
            along = along->next;

        } while (along->next != NULL);
        along->next = temp;
        temp->next = prev;
        return along;
    }
};