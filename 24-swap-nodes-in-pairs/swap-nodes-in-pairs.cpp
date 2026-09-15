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
    ListNode* swapPairs(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return head;

        vector<ListNode*> v;

        ListNode* temp = head;

        // Store all nodes
        while (temp != NULL) {
            v.push_back(temp);
            temp = temp->next;
        }

        // Swap nodes in pairs
        for (int i = 0; i + 1 < v.size(); i += 2) {
            swap(v[i], v[i + 1]);
        }

        // Reconnect nodes
        for (int i = 0; i + 1 < v.size(); i++) {
            v[i]->next = v[i + 1];
        }

        v.back()->next = NULL;

        return v[0];
    }
};