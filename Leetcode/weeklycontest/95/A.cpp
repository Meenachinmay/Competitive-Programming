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
    ListNode* middleNode(ListNode* head) {
      if (head == NULL){
        return NULL;
      }
      ListNode* temp = head;
      int cnt = 0;
      while (temp != NULL){
        cnt++;
        temp = temp->next;
      }
      int cnt1 = 0;
      while (head!= NULL){
        if(cnt1 == cnt/2 || cnt1 == cnt/2+1){
          return head;
        }
        cnt1++;
        head = head->next;
      }
      return head;
    }
};