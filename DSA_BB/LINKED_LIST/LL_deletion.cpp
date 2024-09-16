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
    
    // destructor
    ~Node(){
        cout<< "helo ";
        int value = this -> data ;
        // memory free
        if(this -> next != NULL){
            delete next ;
            this -> next = NULL;
        }

        cout<< "memory is free for node with the data "<< value << endl;
    }

};


//--------insetion just of node input -------
void InsertAtHead ( Node* &head , int d ){
    Node* temp = new Node(d);
    temp -> next = head ;
    head = temp ;
}

//---------------XXXX------------


// middle and last k liye same
// first k liye alag 

void deleteNode(int position , Node* &head ){

// deleting first or start node
if(position == 1 )
{
    Node * temp = head ;
    head = head -> next ;

    // memory free start node 
    temp -> next = NULL;
    delete temp;

}
else {
    // deleting any middle node or last node 
    // using current and previous node 

    Node* curr = head ;
    Node* prev = NULL ;

    int cnt = 1 ;
    cout<< "   instide";
    while (cnt < position ){
        prev == curr;
        curr = curr -> next ;
        cnt ++;
        cout<< "   inside cnt < psoitoin";
    }
cout<<  "     << out but inside    ";
    prev -> next = curr -> next ;
    curr ->next = NULL;
    delete  curr;
}


}

// printing the node data ;
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
Node * node1  = new Node (10);

// init node's head and tail
Node * head = node1 ;
Node * tail = node1 ;

     InsertAtHead(head,11);
     InsertAtHead(head,12);
     InsertAtHead(head,13);
     InsertAtHead(head,14);
     InsertAtHead(head,15);
     InsertAtHead(head,16);
     InsertAtHead(head,17);

   cout<< endl<< "before deletion : ";     
   print(head);

   // ___-------deletion of node -----______

   deleteNode(3,head);
    cout<< endl<< "after deletion node  3: "<< endl;     
   print(head);

cout<< endl;

cout<< endl<< endl;
}