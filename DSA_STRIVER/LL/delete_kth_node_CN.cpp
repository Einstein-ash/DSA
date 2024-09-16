// /*
//  * Definition for linked list.
//  * class Node {
//  *  public:
//  *		int val;
//  *		Node *next;
//  * 		Node *prev;
//  *		Node() : val(0), next(nullptr), prev(nullptr){};
//  *		Node(int x) : val(x), next(nullptr), prev(nullptr) {}
//  *		Node(int x, Node *next, Node *prev) : val(x), next(next), prev(prev) {}
//  * };
//  */

// Node *deleteNode(Node *head, int k){
//     // Write your code here
//      if(head == NULL){
//         return NULL;
//     }
//     int cnt = 0 ; 
//     Node* kNode = head ;
//     while(kNode != NULL){
//         cnt++;
//         if(cnt == k){ break;}
//         kNode = kNode->next;
//     }

//     Node* prev = kNode->prev;
//     Node* front = kNode->next;

//     if(prev== NULL){
//         // return deleteHead(head);
//           if(head == NULL || head->next == NULL){
//         return NULL;
//     }

//     Node* prev = head;
//     head = head->next;

//     head->prev = nullptr;
//     prev->next = nullptr;

//     delete prev;
//     return head;

//     }

//     if(prev == NULL && front == NULL){
//         // deleteHead(head);
//         if(head == NULL || head->next == NULL){
//         return NULL;
//     }

//     Node* tail= head;
//     while(tail->next != nullptr){
//         tail= tail->next ;
//     }
    
//     tail->prev->next = nullptr;

//     delete tail;
//         return NULL;
//     }

//     if(front== NULL){
//        if(head == NULL || head->next == NULL){
//         return NULL;
//     }

//     Node* tail= head;
//     while(tail->next != nullptr){
//         tail= tail->next ;
//     }
    
//     tail->prev->next = nullptr;

//     delete tail;
//     return head;
//     }

//     prev->next = front;
//     front->prev = prev;

//     kNode->next = nullptr;
//     kNode->prev = nullptr;

//     delete kNode;
//     return head;
// }