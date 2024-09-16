    Node* prev = NULL ;

    int cnt = 1 ;
    while (cnt < position ){
        prev == curr;
        curr = curr -> next ;
        cnt ++;
    }

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

     InsertAtHead(head,12);
     InsertAtHead(head,13);