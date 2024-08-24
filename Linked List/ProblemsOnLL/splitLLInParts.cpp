// 725. Split Linked List in Parts

class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int N = 0 ;
        auto it = head;
        while(it){
            N++;
            it = it->next;
        }
        // determine size of each part/bucket
        int partSize = N/ k;
        int extraNodes = N % k ; // divide bucket by bucket

        vector<ListNode*> ans(k, nullptr);
        it = head;

        for(int i=0; i<k && it; i++){
            ans[i] = it; //puri ki puri Linked list dal gayi hai idhar so null ko point krna padega 
            int  currentPartSize = partSize + (extraNodes-- > 0 ? 1: 0);

            for(int j=0; j< currentPartSize -1; j++)
                it = it->next;
            
                 auto nextPartStarting = it->next;
                 it->next = nullptr;
                it = nextPartStarting;
            
        }
        return ans;
    }
}