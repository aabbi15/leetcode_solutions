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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       
        ListNode * ans = new ListNode();
         ListNode *ans2=ans;
          
        while(list1!=NULL && list2!=NULL){
            if(list1->val <list2->val){
               // ListNode *temp(list1->val);
                ans->next=list1;
                ans=ans->next;
                list1=list1->next;
            }
            else{
                //ans=list2;
                ans->next=list2;
                ans=ans->next;
                list2=list2->next;
                
            }
        }
        
        while(list1!=NULL){
             ans->next=list1;
            ans=ans->next;
                list1=list1->next;
        }
        
        while(list2!=NULL){
            ans->next=list2;
            ans=ans->next;
                list2=list2->next;
        }
        return ans2->next;
    }
    
};