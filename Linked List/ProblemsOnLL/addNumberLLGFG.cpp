// solution (gfg que)

class Solution {
  public:
    // Function to add two numbers represented by linked list.
    Node* reverse(Node* &head){
        Node* temp =head;
        Node* prev =NULL;
        
        while(temp != NULL){
            Node* forward = temp->next;
            temp->next =prev;
            prev= temp;
            temp= forward;
        }
        return prev;
    }
    Node* addTwoLists(struct Node* num1, struct Node* num2) {
        // code here
      Node* head1 = reverse(num1);
      Node* head2 = reverse(num2);
        
        Node* ans = new Node(-1);
        Node* it = ans;
        
        int carry =0;
        
        while(head1 || head2 || carry){
            int a= head1 ? head1->data : 0;
            int b= head2 ? head2->data : 0;
            
            int sum = a + b + carry;
            int digit =sum % 10;
            carry = sum /10;
            it->next = new Node(digit);
            it = it->next;
            
            head1 = head1? head1->next : nullptr;
            head2 = head2? head2->next : nullptr;
            
        }
        
        Node* finalAns = ans->next;
        delete ans;
       finalAns= reverse(finalAns);
        
        return finalAns;
       
    }
};