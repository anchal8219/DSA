#include<bits/stdc++.h>
using namespace std;

class ListNode{
    public:
    int val;
    ListNode *next;

    //constructor
    ListNode(int d, ListNode*n = nullptr): val(d), next(n) {};
};

ListNode *vecToLL(vector<int>v){
    int n=v.size();
    ListNode *head = new ListNode(v[0]);
    ListNode*t=head;
    for(int i=1;i<n;i++){
        ListNode *nw = new ListNode(v[i]);
        t->next = nw;
        t=t->next;

    }
    return head;

}

bool checkPalindrome(ListNode* head) {
    ListNode* t = head;
    vector<int> v;
    while (t != nullptr) {
        v.push_back(t->val);
        t = t->next;
    }
    vector<int> v1 = v;
    reverse(v.begin(), v.end()); // Reverse v1 separately

    return (v1 == v);
}


int main(){
    vector<int>v={1,26,3,2,1};
    ListNode *head = vecToLL(v);
    bool ans = checkPalindrome(head);
    if(ans) cout<<"true"<<endl;
    else cout<<"false"<<endl;


}