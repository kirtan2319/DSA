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
    
   void reverse(ListNode* &head, int k, int p){
        if (p==0){
            return;
        }
        ListNode* m = head;
        ListNode*prev = NULL;
        ListNode*cur = head;
        ListNode*forw = head->next;
        int h = k;
        while(h>1){
            cur->next = prev;
            prev = cur;
            cur = forw;
            if(h>2){
            forw = forw->next;
            }
            h--;
        }
        
        head->next = cur->next;
        cur->next = prev;
        head = cur;
        reverse(m->next, k, --p);
    }

    
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(k==1){
            return head;
        }
        else{
        ListNode* temp = head;
        int n = 1;
        while(temp->next != NULL){
            temp = temp->next;
            n++;
        }
        int p = n/k;
       reverse(head, k, p);
        }
       return head;
    }
};