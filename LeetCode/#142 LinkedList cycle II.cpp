class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        bool isCycle = false;
        while(fast && fast->next){   //while fast and fast->next are not null
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow){
                isCycle = true;
                break;
            }
        }
        if(!isCycle)    //if cycle is not found
            return NULL;
        
        fast=head;
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
        return slow;
    }
};