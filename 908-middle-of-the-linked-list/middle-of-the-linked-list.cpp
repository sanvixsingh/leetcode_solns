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
        if(head==NULL){
            return NULL;
        }
        ListNode* temp = head;
        int count =0;
        while(temp!=NULL){
            count++;
            temp = temp->next;
        }
        temp = head;
        if(count %2!=0){
            int n = (count+1)/2;  //3
            for (int i =1; i< n; i++){
                temp = temp->next;
            }
            return temp;
        }else{
            int n = (count/2);
            for (int i =0; i< n; i++){
                temp = temp->next;
            }
            return temp;
        }
        return NULL;
    }
};