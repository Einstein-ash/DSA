#include <iostream>
using namespace std;

// doubly ll means :
// now we have 3 things in a node , : previous , data , next 

class Node {
    public : 
    int data ; 
    Node * prev ; 
    Node * next ;

    // constructor 
    Node(int d ){
        this -> data = d ;
        this -> prev = NULL;
        this -> next = NULL;

    }
};

void print(Node * head ){
    Node* temp = head ;
    while( temp != NULL){
        cout<< temp -> data ;
        temp = temp -> next ;

   cout<< " ";
    }
    cout<< endl;
}

int getLength (Node* head ){
    int count  = 0 ;

     Node* temp = head ;
    while( temp != NULL){
        count ++;
        temp = temp -> next ;

    }
   cout<< "count : " <<  count << endl;

}


// insertion at head of doubly linked list 
void insertAtHead(Node * &tail, Node * &head , int d ){

    // empty list 
    if(head == NULL ){
        Node * temp = new Node(d);
        head = temp ;
    }

    else {
        Node * temp = new Node(d);
        temp -> next = head ;
        head -> prev = temp  ;
        head = temp;
    }

}

// insertion at tail 

void insertAtTail(Node* &tail, Node* &head,  int d) {


    
    // empty list 
    if(tail == NULL ){
        Node * temp = new Node(d);
        tail = temp ;
    }

    else {
        
    Node* temp =  new Node(d);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
    }


}

// insert at a position 
// void insertAtHead ( Node* & tail , Node * & head, int position , int d ){
    
//     if(position == 1 ){
//         insertAtHead(head,d );
//     }

//     else{
//     Node * nodeToinsert = new Node (d);

//     nodeToinsert -> next  = temp -> next ;
//     temp ->next -> prev = nodeToinsert;
//     temp -> next 


//     }


// }


int main() {
cout<< endl;

Node* node1 = new Node(10);
Node * head = node1;
Node * tail = node1;

print (head );
// getLength(head);
    
// insert at head 
insertAtHead(tail,head, 20);
print (head );
// getLength(head);

//  insert at tail
insertAtTail(tail, head,30);
print (head );
// getLength(head);

insertAtHead(tail, head, 40);
print (head );


insertAtHead(tail, head, 8);
print (head );

insertAtTail(tail,head, 101);
print (head );

cout<< endl<< endl;
}