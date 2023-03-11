class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
    
    ListNode * stop=head;
            ListNode * farward =head->next;
        while(farward!=NULL)
        {
            if(farward->val!=0)
            {
                stop->val=stop->val + farward->val;
               
            }
            else
            {
                if(farward->next == NULL)
                {
                   stop->next=NULL; 
                }
                else
                {
                   stop->next=farward;   
                }
             stop=farward; 
            }
            
            farward=farward->next;
        }
        return head;
    }
};