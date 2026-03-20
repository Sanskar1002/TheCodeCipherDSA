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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==nullptr && headB==nullptr){
            return NULL;
        }

        if(headA==headB){
            return headA;
        }
        ListNode* tempA = headA;
        ListNode* tempB = headB;

        while(tempA!=tempB){
            tempA = (tempA==NULL)?headB:tempA->next;
            tempB = (tempB==NULL)?headA:tempB->next;
        }

        return tempA;

        
    }
};