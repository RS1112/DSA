class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* new_head=NULL;
        while(head!=NULL){
            ListNode* temp=head;
            head=head->next;
            temp->next=new_head;
            new_head=temp;
        }
        return new_head;
    }
};