#include <iostream>

using namespace std; 


void print (int *p) {
    cout<< p<< endl ;
    cout<< *p<< endl ;
}


void update (int *p){
    p = p+1;
    cout<< "inside : " << p << endl  ;
    cout<< "inside : " << *p<< endl  ;
}



// getSum Function 
int getSum (int arr[] , int n) {

//niche  wali line will return size of {Pointer} - bcoz arr as a pointer jata h, not full array 

    // cout<< "size of arr : " << sizeof(arr)<< endl;


    int sum = 0 ;
    for(int i= 0  ; i< n ; i++) {
        sum += arr[i];
    }
    return sum ;
}



int main ( ){
cout<< endl ;

// int value = 5 ;
// int *p = &value ;

// // print(p);

// cout<< "befor : " << p<< endl ;
// cout<< "before : " << *p<< endl ;

// update (p);

// cout<< "after : " << p<< endl ;
// cout<< "after : " << *p<< endl ;


int arr[5] = {1,2,3,4,5} ;

cout<< "sum is : " << getSum(arr,5)<<endl ;  //- arr ka first adrres hi send hua h bss, 

// fayda - i can send array part like 
cout<< "sum from 3 to 5 :  " << getSum(arr + 2, 3) << endl;

cout<< endl ;
cout<< endl ;
}