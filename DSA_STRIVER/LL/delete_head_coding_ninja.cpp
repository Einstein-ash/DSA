// /*
// Following is the class structure of the Node class:

// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node *prev;
//     Node()
//     {
//         this->data = 0;
//         next = NULL;
//         prev=NULL;
//     }
//     Node(int data)
//     {
//         this->data = data; 
//         this->next = NULL;
//         this->next= NULL;
//     }
//     Node(int data, Node* next, Node *prev)
//     {
//         this->data = data;
//         this->next = next;
//         this->prev= prev;
//     }
// };
// */

// Node * deleteHead(Node *head) {
//     // Write your code here.
//     if(head== NULL){
//         return NULL;
//     }

//     Node* temp = head;

//     if(head->next == NULL){
//         delete temp;
//         return NULL;
//     }
//     head = head->next;
//     head->prev = NULL;

//     delete temp;
//     return head;

// }
