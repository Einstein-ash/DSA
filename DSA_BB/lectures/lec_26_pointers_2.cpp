// ___ learnt ____

// * : value at 
// & : address of 

// imp formula :    arr[i]  = * (arr + i );       or     i[arr]  = * ( i + arr )


// Symbol table ka content can't be changed 
// means : arr  = arr + 1 ;      XXXXXXXXXXXXX can't do  it ;
// als




#include <iostream>
using namespace std;

int main() {
    cout<< endl ;


    int arr[10] = {1,2,3,4,5,6,7,8,9,10};


    // cout<< "address of first element (using   : arr ): "<< arr<< endl ;
    // cout<< "address of first element (using : &arr[0] ): "<< &arr[0]<< endl ;

    // cout<< "value at index 0 : "<< arr[0] << endl;
    // cout<< "value at index 0 (using *arr): "<< *arr << endl;
    // cout<< "value at index 1 (using *arr): "<< *arr + 1 << endl;
    // cout<< "value at index 2 (using *arr): "<< *arr + 2<< endl;   // same to niche wali line 
    // cout<< "value at index 2 (using *arr): "<< *(arr + 2)<< endl;


    int i = 3 ;
    // cout<< i[arr] << endl ;     // 3th index : using  :   i[arr] =  * (i + arr ) ;




    int *p = &arr[0];    // will store address of first element 
    int *ptr = arr;    // same to above  

    // cout<< p<< endl ;
    // cout<< *p<< endl ;
    // cout<< arr<< endl ;
    // cout<< arr[0]<< endl ;



int a[20] = {1,2,3,5};

// address with & 
// cout<<"address of a[0] : "<<  &a << endl ;
// cout<< "address of a[0] : "<< &a[0] << endl ;
// cout<<"address of a[0] : "<< a<< endl ;


// cout<< "address of a[1] : "<< a+1<< endl ;


int arr2[10] = {1,2,3,4,5,6} ;
int * ptr2 = arr2;

// arr2 = arr2 +   1;    //  symbol table m change ni kr skte 

// but 

// cout<< "value  (before changing ptr2): " << *ptr2<<endl ;


ptr2 = ptr2 + 1 ;
// cout<< *ptr2 <<endl ;
// cout<< "value (after changing ptr2): " << *ptr2<<endl ;








    // *********** Difference b/w Pointers and Arrays *******************

















    // *********** Char arrays  *******************

    int arr3[5 ] = {1,2,3,4,5};
    char ch[6] = "abcde";

    // cout<< "address of arr : "<< arr3 << endl;
    // cout<<"address of ch : " << ch << endl;

    // result : {cout} works differently for {int} and {char}

char *ptr_char = ch;
int  *ptr_arr3 = arr3;

cout<< ptr_arr3<< endl ;   // o/p - address of arr3[0]
 cout<< ptr_char;         // still it will print {abcde} - full string 




// last 20 minutes still remaining to code 

// functions 
    
    cout<< endl ;
    cout<< endl ;
}