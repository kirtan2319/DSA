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

    ListNode* rev(ListNode* head){
    ListNode* prev = nullptr;
    ListNode* curr = head;

    while(curr){
        ListNode* nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }

    return prev;
}

    void merge(ListNode* i, ListNode* j){
        if(!j || !i){
            return;
        }
        if(!i->next){
            i->next = j;
            return;
        }

        
            ListNode* a = i->next;
            ListNode* b = j->next;
            i->next = j;
            j->next = a;
            merge(a,b);
    }

    void reorderList(ListNode* head) {
        if(!head){
            return;
        }
        if(!head->next){
            return;
        }
        int n = 0;
        ListNode* a = head;
        while(a){
            a = a->next;
            n++;
        }
        int k;
        a = head;
        if(n%2 == 0){
            k = (n/2);
        }
        else{
            k = (n/2) + 1;
        }
        while(k != 1){
            a = a->next;
            k--;
        }
        ListNode* e = a;
        a = a->next;
        e ->next = nullptr;

        ListNode * x = rev(a);
        
        merge(head, x);
    }
};