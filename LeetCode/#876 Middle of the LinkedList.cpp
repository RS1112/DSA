class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int len=0;
        ListNode* curr=head;
        while(curr!=NULL){
            len++;
            curr=curr->next;
        }
        curr=head;
        int mid=len/2;
        for(int i=0; i<mid; i++){
            curr=curr->next;
        }
        return curr;
    }
};