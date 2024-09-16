
#include <iostream>
using namespace std;

// return ith fib number 
int fib(int n ){

    if(n == 0) {return 0; }
    if(n == 1 ) {return 1 ;} 

return (fib(n-1) + (fib(n-2)));
}

int remaining(int n) {
    if( n == 0 ){ return 0 ;}
    if( n == 1 ){ return 1 ;}

    int num = 0  ; int i = 0 ;
     while(num <= n ) {
        num = fib(i++) ;
    }
        return (i -2);
        // return num -fib(i -1);
}

// return number of fib numbers to sum 
int fib_sum_count(int n){

    // int i =0 ;
    // int num = 0 ;
    
    // while(num <= n ) {
    //     num = fib(i++) ;
    // }

    // int e = i - 2;

//  cout<<" checking for 7 : "<<  fib(remaining(7))<< endl ;


    // int sum = fib(remaining(n)) ;

    // cout<< endl<< sum << endl ;
    int sum = 0 ; int count = 0 ;
    // int sub = n ;

    while(sum < n) {
        
    //     if((sum + fib(s)) > n){
    //         cout<< sum ;
    //         sum += fib(s-1) ;
    //         cout<<" + " <<fib(s-1)  << " = " << sum << endl; 
            
        
    //         count ++; s = 0  ;
           
    //     }

    //     else if (sum == n ) {
        
    //         return count  ;
    //     }

    //     else { s++;}


// ----- optimized -----------



int sub = n - sum ;
sum += fib(remaining(sub));
cout<< endl<<  sum << endl;
count++;






    }

    return count ;
}

int main() {


cout<< endl;

// 7081880
     

cout<<" count for 7  : " << fib_sum_count(7) ;
cout<<" count for 7081880  : " << fib_sum_count(7081880) ;

//  cout<<" checking for 7 : "<<  fib(remaining(19))<< endl ;
//  cout<<" checking for 1 : "<<  fib(remaining(1))<< endl ;
//  cout<<" checking for 0 : "<<  fib(remaining(0))<< endl ;
//  cout<<" checking for 9 : "<<  fib(remaining(9))<< endl ;
//  cout<<" checking for 19 : "<<  fib(remaining(19))<< endl ;

cout<< endl<< endl;
}