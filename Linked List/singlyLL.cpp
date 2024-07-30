#include<iostream>
using namespace std;
class Node
{
    public:
     int data;
     Node* next;
// constructor
 
Node(int value){
    this->data =value;
    this->next = NULL;
}
   
};

Node* insertAtHead(int value, Node* &head , Node* &tail){
    // LL is empty 
    // it means we are creating first node 
    if(head== NULL && tail == NULL){
    // step 1: create a new node 
    Node* newNode = new Node(value);
    // step 2 : head ko node pr lagao
    head = newNode;
    // step 3: tail ko newNode pr lagado
    tail = newNode;
    }else{
    // LL is not empty
    // it means pehale se node present hai 
    // step: 1
    Node* newNode = new Node(value); 
    // step: 2
    newNode->next = head;
    //step: 3 
    head =newNode;
    }
    return head; 
}
void print(Node* head){
    Node* temp = head;
    // jab tak mera temp NULL k equal nahi hai, tab tak node print krte raho
    while(temp!=NULL){
        cout<<temp -> data<<"->";
        temp= temp -> next;
    }
    cout <<"NULL"<<endl;
}

Node* insertAtTail(int value, Node*&head, Node* &tail){
    if(head==NULL && tail==NULL){
        Node* newNode = new Node(value);
        head=newNode;
        tail =newNode;
    }else{
        Node* newNode = new Node(value);
        tail->next = newNode;
        tail= newNode;
    }
    return head;
}

int getLength(Node* &head ){
    int l=0;
    Node* temp =head;
    while(temp!=NULL){
        temp=temp->next;
        l++;
    }
    return l;
}

void insertAtPosition(int position, int value , Node* &head ,Node* &tail){
int length = getLength(head);

if(position==1){
    insertAtHead(value,head ,tail);

}
else if(position == length+1){
insertAtTail(value,head ,tail);
}else{
   Node* temp= head;
    for(int i=0; i<position-2; i++){
        temp=temp->next;
    }
    Node* newNode = new Node(value);
    newNode->next = temp->next;
    temp->next = newNode;
};

}

bool linearSearch(Node* &head, int target){
 
    Node* temp =head;
    while(temp != NULL){
        if(temp->data == target){
            return true;
        }
        temp =temp->next;
    }
   return false;
} 

void deleteNodeFromLL(int position, Node* &head, Node* &tail){
    // if LL is empty, then we cannot delete
    if(head == NULL && tail == NULL){
        cout<< "No node to delete"<< endl;
        return;
    }
    if(head == tail){
        Node* temp = head;
        head =NULL;
        tail =NULL;
        delete temp;
    }else{
        // multiple nodes inside LL
        // delete pos 1
        if(position==1){
            Node* temp =head;
            head =temp->next;
            temp->next =NULL;
            delete temp;
        }
        else{
            Node* pre = head;
            for(int i=0;i<(position-2);i++){
                 pre =pre->next;
            }
            Node* curr =pre->next;
            Node* forward = curr->next;
            pre->next =forward;
            curr->next =NULL;
            delete curr;
        }
    }
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

// //     // LL is empty
//    head= insertAtHead(10,head,tail);
//    print(head);
//     // 10 -> NULL
//    head= insertAtHead(20,head, tail);
//    print(head);
//     // 20->10->NULL
//    head= insertAtHead(30,head,tail);
//    print(head);
// //     // 30->20->10->NULL

head=insertAtTail(101,head,tail);
// print(head);
// // 101->NULL
head=insertAtTail(102,head,tail);
// print(head);
// // 101->102->NULL
head=insertAtTail(103,head,tail);
head=insertAtTail(104,head,tail);
// print(head);
// 101->102->103-NULL

// insertAtPosition(2,20,head,tail);
// print(head);

// cout<<linearSearch(head,20);

deleteNodeFromLL(1,head,tail);
print(head);
    // // stack
    //  Node first;
   // dynamic memory
    // Node* first =new Node(10);
    // cout<<first;

    return 0;
}