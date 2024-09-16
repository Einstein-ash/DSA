
// we can't do this :   *ptr = arr++;


#include<iostream>

using namespace std; 

// update function 

void update (int ** p) {
    

    *p = *p + 1;

    // **p = **p +1;   // wil change ? yes ;
}


int main () {

cout<< endl;

    int i = 5 ; 
    int * p = & i ; 
    int ** p2  = &p ;

    // cout<< "Before i : " << i <<endl ;
    cout<< "Before p : " << p <<endl ;

    update (p2);
    // cout<<" after i : " << i <<endl ;
    cout<<"After p : " << p <<endl ;
    cout<< endl;
}