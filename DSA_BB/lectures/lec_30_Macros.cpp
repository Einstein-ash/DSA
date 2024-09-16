// Macros 
// Global variable, : scope is global  (use km krna,) : use - bad practice : koi bhi change kr skta hai 
// instead use : refrence varibale : (&i)
// local varible : scope is within the function 


//*********** Inline Function ************
// are used to reduce the func calls overhead 



// 
//*********** Default args ************






#include<iostream>
using namespace std;

// void share(int i){
void share(int &i){    // shared as refrence variable
    i++;
    cout<<"inside : " << i<< endl ; 
}

inline int  Max(int a , int b ) {
    // cout<< "inside but before increment : " << a << " and " << b<< endl  ;
    // a++ ;
    // b++;
    // cout<< endl << a << " and " << b<< endl;

    // tertiary form -----------------(
    return  (a>b? a : b );
}

// default args function---------------
void default_args(int arr[] , int size , int start  = 0   ){
    for(int i = start ; i< size ; i++) {
        cout<< arr[i] << " ";
    }
}





// defining a macro 
#define Ash 18  

int main(){
cout<< endl ;
    int i = 3 ;
    // share(i);
    // cout<<"after : " << endl<< i <<endl;

// macro ----------------
// cout<< "Its my birthday on : "<< Ash << endl;

 

// ------------ Tertiary Form ----------(using in inline function )

int a = 4 ; int b = 5 ;
if(a> b ){
    cout<< " a is bda . "<< endl ;
}

else {
    cout<< "b is bda ." << endl ;
}

// Inline fucniton -----------
cout<< "maximum of a and b : " << Max(4,6)<< endl  ;

// Default Args ------------------

cout<< endl<< "printing array :  " ;

int arr [6] = {1,2,3,4,5,6} ;
default_args(arr, 6 ,0);        // with start input 


cout<< endl<< "printing array :  " ;

default_args(arr, 6);
cout<< endl<< " starting from  3 : "  ;         // without start input 
default_args(arr, 6,3);           // with starting input 3





cout<< endl;
}