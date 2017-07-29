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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* pre = NULL;
        ListNode* first = head;
        ListNode* last = head;
        for(int i = 0;i<n-1;i++){//不存在n比链表的长度还大的情况 note that n-1 not n
            last = last->next;
        }
        while(last->next){
            pre = first;
            first = first->next;
            last = last->next;
        }
        if(pre == NULL){
            head = first->next;
            delete first;
        } else {
            pre->next = first->next;
            delete first;
        }
        return head;
    }
};