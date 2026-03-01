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
    ListNode * rev(ListNode*head){
        ListNode *prev=NULL;
        while(head ){
            ListNode*temp=head->next;
            head->next=prev;
            prev=head;
            head=temp;
        }
        return prev;
    }
    ListNode* removeNodes(ListNode* head) {
        if(!head) return NULL;
        head=rev(head);
        ListNode*start=head;
        int mx=start->val;
        while(start && start->next){
            if(start->next->val<mx){
                start->next=start->next->next;
            }
            else{
                start=start->next;
                mx=start->val;
            }
        }
        return rev(head);
    }
};