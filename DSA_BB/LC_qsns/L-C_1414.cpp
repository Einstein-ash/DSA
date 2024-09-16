
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
     
}

// return number of fib numbers to sum 
int fib_sum_count(int n){

    int sum = 0 ; int count = 0 ;
    while(sum < n) {
        
        int sub = n - sum ;
        sum += fib(remaining(sub));
        count++;
    }

    return count ;
}

int main() {

cout<< endl;

// 7081880
     
// cout<<" count for 7  : " << fib_sum_count(7) ;
cout<<" count for 7081880  : " << fib_sum_count(7081880) ;

cout<< endl<< endl;
}