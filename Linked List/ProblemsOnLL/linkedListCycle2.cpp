// solution (que. leetcode 142)

class Solution {
public:
    ListNode *detectCycle1(ListNode *head) {
        unordered_map<ListNode*, bool>m;
        ListNode* temp = head;
        while(temp != NULL){
            if(m[temp] == true){
                return temp;
            }else{
                m[temp] = true;
            }
            temp = temp->next;
        }
        return NULL;

    }

    ListNode *detectCycle2(ListNode *head) {
            
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL){
            fast = fast->next;

            if(fast != NULL){
                fast = fast->next;
                slow= slow->next;
            }
            if(fast == slow){
                
                return slow;
            }
        }
        return NULL;
    }

     ListNode *detectCycle(ListNode *head) {

    //    return detectCycle1(head);

        ListNode* fast = detectCycle2(head);
        if(!fast)return nullptr;
      ListNode* slow = head;
      while(slow != fast){
        slow= slow->next;
        fast = fast->next;
      }
      return slow;
     }
};