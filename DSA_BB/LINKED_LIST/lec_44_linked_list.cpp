#include <iostream>
using namespace std;


class Node {

    public : 
    int data ;
    Node* next ;

    // constructor 
    Node(int data ){
        this -> data = data ; 
        this -> next = NULL ;
    }

};

// Insertioin 

void InsertAtHead ( Node* &head , int d ){
    Node* temp = new Node(d);
    temp -> next = head ;
    head = temp ;
}

// insert at tail 
void InsertAtTail( Node * &tail, int t) {
    // new node create 
    Node* temp = new Node (t);
    tail -> next = temp ;
    tail = tail -> next ;
}

// insert at position 

void InsertAtPosition (Node* &tail,  Node * &head , int position  , int n){

    if(position == 1){
        InsertAtHead(head , n);
        return ;
    }

    
    
   Node * temp = head ;
   int cnt = 1; 
   while (cnt < position - 1 ){
    temp = temp -> next ;
    cnt ++ ;

   }

// inseting at last position
if( temp -> next == NULL){
    InsertAtTail(tail,n);
    return ;
}
   // creating a node for d 
   Node* nodetoinsert = new Node(n);

nodetoinsert -> next = temp -> next ;
temp ->next = nodetoinsert;


}
void print (Node * &head ){
    Node * temp = head ;

    while(temp != NULL ){
        cout<< temp -> data << " ";
       temp = temp -> next ;

    }
    cout<< endl;
}

int main() {
cout<< endl;

cout<< " Working on Singly Linked List "<< endl ;

// created a new node 
Node * node1  = new Node ( 10 );
// cout<< node1 -> data << endl ;
// cout<< node1 -> next << endl ;

// head pointd to node1 
Node * head = node1 ;
Node * tail = node1 ;
print ( head );

//------------insert at head ---------



// InsertAtHead(head , 12 ) ;
// print ( head );

// InsertAtHead(head , 14 ) ;
// print ( head );

// InsertAtHead(head , 15 ) ;
// print ( head );

//------------insert at tail ---------


InsertAtTail(tail , 12 ) ;
print ( head );

InsertAtTail(tail , 14 ) ;
print ( head );

InsertAtTail(tail , 15 ) ;
print ( head );

//------------insert at position ---------

InsertAtPosition (tail,head , 5, 33);
print (head );


cout<< "head : "<< head ->data << endl;
cout<< "tail : "<< tail ->data << endl;


cout<< endl<< endl;
}