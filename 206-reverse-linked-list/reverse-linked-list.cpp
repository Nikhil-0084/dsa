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
    ListNode* reverseList(ListNode* head) {
         if (head == NULL || head->next == NULL)
            return head;
        stack<ListNode*>st;
        ListNode*temp=head;
        while(temp!=NULL){
            st.push(temp);
            temp=temp->next;
        }
        head=st.top();
        st.pop();
        temp=head;
        while(!st.empty()){
            temp->next=st.top();
            st.pop();
            temp=temp->next;
        }
        temp->next=NULL;
        return head;
    }
};