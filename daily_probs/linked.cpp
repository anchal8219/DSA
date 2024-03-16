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
        int c=0;
        ListNode* t= head;
        while(t->next!=nullptr){
            c++;
            t=t->next;
        }
        // cout<<c+1;
        t = nullptr;
        t = head;
        int md = (c+1)/2;
        int ct=0;
        while(ct!=md){
            t=t->next;
            ct++;
        }
        return t;
    }
};