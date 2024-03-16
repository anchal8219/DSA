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
    ListNode* removeZeroSumSublists(ListNode* head) {
        int ps = 0;
        unordered_map<int,ListNode*>m;
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        m[0]=dummy;
        while(head!=nullptr){
            ps += head->val;
            if(m.find(ps)!=m.end()){
                ListNode* start = m[ps];
                ListNode* temp = start;
                int p = ps;

                while(temp!=head){
                    temp=temp->next;
                    p+=temp->val;

                    if(temp!=head)
                    m.erase(p);
                }
                start->next = head->next;
            }
            else{
                m[ps]=head;
            }
            head=head->next;
        }
        return dummy->next;
    }
};