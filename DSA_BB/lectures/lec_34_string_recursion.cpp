// what i learnt ======

// --------- Recursion --------


#include <iostream>
using namespace std;

// reverse a string using recursion 
void revStr(string & str , int s , int e ) {
    if(s > e ) 
        {return ;} 
    
    swap(str.at(s), str.at(e));
    return revStr(str, s+1, e-1);

}

// check Palindrome for string  using recursion 
bool checkPalindrome(string str, int s , int e ){
    if(s > e){
        return true ;
    }

    if(str.at(s) == str.at(e) ){
        return checkPalindrome(str, s+1, e-1);
    }
return false;
}

// ------ Power with recusrion -----------

double power(double x , int n) {
    if(n == 0 ) {
        return 1;
    }
    if(n == 1 ) {
        return x;
    }

    return x * power(x, n-1);
}

// ------ Bubble sort -----------
void bubble_sort( int arr[], int size ) {
    if(size == 0 || size == 1 ) {
          return ; 
    }

    for(int i = 0 ; i < size -1 ; i++) {
        if(arr[i] > arr[i+1] ){
    
            swap(arr[i] , arr[i+1]) ;

        }

    }
    return bubble_sort(arr, size -1);

}
int main() {

cout<< endl;

// --- String Reverse ---------
// string str = "Selwal";
//      int e = str.size() -1 ;

// cout<< "reversed string : ";  
//  revStr(str, 0 ,e );
//  cout<< str;

// ------ check Palindrome -------

// string str = "MalayalaM";
// cout<< "is palindrome : "<< checkPalindrome(str, 0 , str.size() -1 );


// ------ Power with recusrion -----------

// cout<< "5 ^ (-2) : "<< power(-5, 3) ;

// ------ Bubble sort -----------

int arr[7] = {1,6,2,4,2,8,4};  
bubble_sort(arr, 7 );
cout<< endl<< "after bubble sort : "  ;
for(auto i:arr){
    cout<<i << " " ;
}



cout<< endl<< endl;
}