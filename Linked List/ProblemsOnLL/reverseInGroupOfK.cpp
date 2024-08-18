// solution (leetcode Que. 25)

class Solution {
public:
    int getlength(ListNode* &head){
        int count = 0;
        ListNode* temp = head;
        while(temp != NULL){
            count++;
            temp =temp->next;
        }
        return count;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        // LL is empty
        if(head == NULL || head->next == NULL){
            return head;
        }
        // atleast you have 2 nodes

        // check for LL lenght
        int len = getlength(head);
        if(len < k){
            // no need to reverse the LL
            return head;
        }
        // 1 case we solve remainig will solve recursion
        // 1 case -> k length ko reverse krna hai

        ListNode* prev = NULL;
        ListNode* curr = head;
        int position = 0;

        while(position < k){
            ListNode* forward = curr->next;
            curr->next =prev;
            prev = curr;
            curr = forward;
            position++;
        }

        // baki recursion sambhal lega
       if(curr != NULL){
        ListNode* recursionKaHead = reverseKGroup(curr, k);
        head->next = recursionKaHead;
       } 

       return prev;
        
    }
};