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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* Current=head;
        ListNode* Next=head->next;
        
        if(!head || !head->next){
            return head;
        }
       
        while(Next){
            ListNode* gcd=new ListNode(__gcd(Current->val,Next->val));
            Current->next=gcd;
            gcd->next=Next;
            Current=Next;
            Next=Next->next;
        }
        return head;
    }
};