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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode*t=head;
        ListNode* before = NULL;
        int pos=1;
        while(t){
            if(pos<left){
                before=t;
                t=t->next;
                pos++;
                continue;
            }
            else break;
        }
        ListNode*curr=t;
        ListNode*prev=NULL;
        int time=right-left+1;
        while(time--){
            ListNode*temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        t->next=curr;
        if(before) before->next = prev;
        else head = prev;
        return head;
    }
};