#include <iostream>
#include <bits/stdc++.h>

using namespace std;


class Node {
    public:
    int data;
    Node* next ;
    Node* back;

    Node(int data1, Node* next1, Node* back1) {
       data = data1;
       next = next1;
       back = back1;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }

};

Node* convertArr2DLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node*prev = head;

    for(int i=1 ; i<arr.size() ; i++){
        Node* temp = new Node(arr[i],nullptr,prev);
        prev->next = temp; 
        prev = temp;
    }
    return head;
};

void  print(Node* head){

    while(head != nullptr){
        cout<< head->data<< " ";
        head = head->next;
    }
    cout<<endl;
}

// DELETE The node  
Node* deleteHead(Node* head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }

    Node* prev = head;
    head = head->next;

    head->back = nullptr;
    prev->next = nullptr;

    delete prev;
    return head;
}


// Delete the Tail 

Node* deleteTail(Node* head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }

    Node* tail= head;
    while(tail->next != nullptr){
        tail= tail->next ;
    }
    
    tail->back->next = nullptr;

    delete tail;
    return head;
};


Node* removeKthEl(Node* head, int k ){
    if(head == NULL){
        return NULL;
    }
    int cnt = 0 ; 
    Node* kNode = head ;
    while(kNode != NULL){
        cnt++;
        if(cnt == k){ break;}
        kNode = kNode->next;
    }

    Node* prev = kNode->back;
    Node* front = kNode->next;

    if(prev== NULL){
        return deleteHead(head);
    }

    if(prev == NULL && front == NULL){
        deleteHead(head);
        return NULL;
    }

    if(front== NULL){
        return deleteTail(head);
    }

    prev->next = front;
    front->back = prev;

    kNode->next = nullptr;
    kNode->back = nullptr;

    delete kNode;
    return head;
    
};

Node* removeGivenEl(Node* head , int k ){
   
   if(head == NULL ){ return NULL;}

    Node* temp = head ;

    while(temp->data != k){
        temp = temp->next;
    }

    Node* prev = temp->back;
    Node* front = temp->next;

    if(prev == NULL ) {
        return deleteHead(head);
    }
    if(prev == NULL && front== NULL ) {
        return deleteHead(head);
    }
    if(front == NULL ) { 
        return deleteTail(head);
    }

    prev->next = front;
    front->back = prev;

    temp->next = nullptr;
    temp->back = nullptr;
    delete temp;
    return head;

};

Node* insertAtHead(Node* head, int data){
     Node* temp = new Node(data);

    if(head== NULL){
        return temp;
    }

    temp->next = head;
    head->back = temp;

    head = temp;
    return head;
};

Node* insertAtTail(Node* head, int data){
     Node* temp = new Node(data);

    if(head== NULL){
        return temp;
    }

    Node* check = head;
    while(check->next != NULL){
        check = check->next;
    }

    check->next = temp;
    temp->back= check;

    return head;
};

Node* insertNodeAtKth(Node* head, int data, int k ){
    Node* temp = new Node(data);

    if(head== NULL){
        return temp;
    }
    int cnt =0 ;
    
    Node* check = head;
    while(check != NULL){
        cnt++;
        if(cnt == k) {  break; }
        check = check->next;
    }

    Node* prev = check->back;
    Node* front = check->next; 

    if(prev == NULL){
       return insertAtHead(head,data);
    }

    if(front == NULL){
        // return insertAtTail(head,data);
        prev->next = temp;
        temp->back = prev;

        temp->next = check;
        check->back = temp;
        return head;
    }

    prev->next = temp;
    temp->back = prev;

    temp->next = check;
    check->back = temp;

    return head;

}


int main() {

   vector<int> arr = {5,3,6,12,0};
   Node* head = convertArr2DLL(arr);
   print(head);
//    head =  deleteHead(head); 
//    head = deleteTail(head);

// head = removeKthEl(head,3);    // remove the kth element 

// head = removeGivenEl(head,6);

head = insertNodeAtKth(head,8,1);   // (head, value, position)
   print(head);


 
    return 0;
}