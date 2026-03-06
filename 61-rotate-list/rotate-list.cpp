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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next || k==0) return head;
        ListNode*curr=head;
        ListNode*tail=head;
        int count=1;
        while(tail->next){
            count++;
            tail=tail->next;
        }
        k=k%count;
        if(k==0) return head;
        int c=count-k;
        ListNode*cut=head;
        while(c > 1){
            cut = cut->next;
            c--;
        }
        ListNode* m = cut->next;
        cut->next = NULL;
        tail->next = curr;
        return m;
    }
};