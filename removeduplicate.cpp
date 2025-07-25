//Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head) {
            return nullptr;
        }
        
        ListNode* temp = head;
        ListNode* temp2 = head->next;
        int last = head->val;
        
        while (temp2 != nullptr) { 
            if (temp2->val == last) { 
                if (temp2->next == nullptr) {
                    temp->next = nullptr;
                    break;
                }
                temp2 = temp2->next; 
                temp->next = temp2; 
            } else { 
                temp = temp2;
                last = temp->val;
                temp2 = temp2->next;
            }
        }
        
        return head; 
    }
};
