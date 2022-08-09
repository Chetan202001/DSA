ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* dummy=new ListNode(0);
        ListNode* curr=dummy,*prev=dummy,*next=dummy;
        dummy->next=head;
        int c=0;
        while(curr->next!=NULL)
        {
            curr=curr->next;
            c++;
        }
        while(c>=k)
        {
            curr=prev->next;
            next=curr->next;
            for(int i=1;i<k;i++)
            {
                curr->next=next->next;
                next->next=prev->next;
                prev->next=next;
                next=curr->next;
            }
            prev=curr;
            c=c-k;
        }
        return dummy->next;
    }