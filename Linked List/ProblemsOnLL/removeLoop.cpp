// solution (ques GFG)


class Solution {
public:
    // Helper function to detect a loop and return the meeting point of slow and fast pointers
    Node* removeLoop1(Node* head) {
        Node* slow = head;
        Node* fast = head;

        while (fast != NULL && fast->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;

            if (fast == slow) {
                return slow;  // Loop detected, return the meeting point
            }
        }
        return NULL;  // No loop found
    }

    // Function to remove a loop in the linked list
    void removeLoop(Node* head) {
        Node* meetingPoint = removeLoop1(head);
        if (meetingPoint == NULL) return;  // No loop detected, so nothing to remove

        Node* slow = head;
        Node* fast = meetingPoint;
        Node* prev = nullptr;

        // If the loop starts at the head, handle it separately
        if (slow == fast) {
            // Find the node that points back to the head
            while (fast->next != slow) {
                fast = fast->next;
            }
            fast->next = NULL;  // Break the loop
            return;
        }

        // Otherwise, find the start of the loop
        while (slow != fast) {
            prev = fast;  // Keep track of the previous node
            slow = slow->next;
            fast = fast->next;
        }

        // Break the loop
        prev->next = NULL;
    }
};