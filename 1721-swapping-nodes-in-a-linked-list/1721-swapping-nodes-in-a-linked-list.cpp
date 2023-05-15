class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int> ans;
        ListNode* temp=head;
        while(temp!=NULL){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        
        swap(ans[k-1],ans[ans.size()-k]);
        ListNode* dummy=new ListNode();
        ListNode* temp2=dummy;

        for(int i=0; i<ans.size(); i++){
            ListNode* newnode= new ListNode(ans[i]);
           dummy->next=newnode;
            dummy=dummy->next;
        }
        return temp2->next;
    }
};