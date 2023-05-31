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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        int sum;
        
        ListNode *temp1=l1,*temp2=l2;
        ListNode *ans=new ListNode(),*headans=ans;
        
        
        while(temp1!=NULL && temp2!=NULL){
            sum=(temp1->val+temp2->val+carry)%10;
            carry=(temp1->val+temp2->val+carry)/10;
            
            ListNode * tempans=new ListNode(sum);
            ans->next=tempans;
            temp1=temp1->next;
            temp2=temp2->next;
            ans=ans->next;
            
        }
        
        while(temp1!=NULL){
            sum=(temp1->val+carry)%10;
            carry=(temp1->val+carry)/10;
            
            ListNode * tempans=new ListNode(sum);
            ans->next=tempans;
            temp1=temp1->next;
            //temp2=temp2->next;
            ans=ans->next;
            
        }
        
         while(temp2!=NULL){
            sum=(temp2->val+carry)%10;
            carry=(temp2->val+carry)/10;
            
            ListNode * tempans=new ListNode(sum);
            ans->next=tempans;
            //temp1=temp1->next;
            temp2=temp2->next;
            ans=ans->next;
            
        }
        
        if(carry==1){
             ListNode * tempans=new ListNode(1);
            ans->next=tempans;
            //temp1=temp1->next;
            
        }
        
        
        return headans->next;
        
    }
};