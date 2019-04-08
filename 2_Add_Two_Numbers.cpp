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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * h = new ListNode(0),* p = h,* l = h;
        ListNode * a = l1,* b = l2;
        int c = 0,t;
        while(a && b){
            t = a->val + b->val + c;
            p->val = t%10;
            c = t/10;
            p->next = new ListNode(0);
            l = p;
            p = p->next;
            a = a->next;
            b = b->next;
        }
        while(a){
            t = a->val + c;
            p->val = t%10;
            c = t/10;
            p->next = new ListNode(0);
            l = p;
            p = p->next;
            a = a->next;
        }
        while(b){
            t = b->val + c;
            p->val = t%10;
            c = t/10;
            p->next = new ListNode(0);
            l = p;
            p = p->next;
            b = b->next;
        }
        if(c>0){
            p->val = c;
            p->next = NULL;
        }else{
            delete p;
            l->next = NULL;
        }
        return h;
    }
};
