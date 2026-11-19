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
        
        ListNode* m=new ListNode(0);
        ListNode* listnew = nullptr;
        ListNode* head=new ListNode(0);
        ListNode* l3=head;
        int fin=0;
        while ((fin==0)&&((l1 != nullptr)||(l2 != nullptr))){
            if(l1==nullptr ){
                listnew=new ListNode(0);
                l1=listnew;
            }
            if(l2==nullptr ){
                listnew=new ListNode(0);
                l2=listnew;
            }
            int x =head->val+l1->val+l2->val;
            if(x<10){
                head->val=x;
                if(l1->next==nullptr&&l2->next==nullptr){
                    fin=1;
                }
                else{
                    ListNode* m=new ListNode(0);
                    
                    head->next=m;
                    head=head->next;

                }
                

            }
            else{
                string ch=to_string(x);
                head->val=ch[1]-'0';
                head->next=new ListNode(1);
                head=head->next;
            }
            l1=l1->next;
            l2=l2->next;
        }
        
        
        return l3 ;   
    }
};