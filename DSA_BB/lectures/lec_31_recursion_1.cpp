// What i learnt : 
// ------- Recursion ----------
// : when a function calls itself;
// using : jbb ek badi problem depends on kaii choti problems 

/// like : power : 2^n =  

// factorial : 5! = 5 x 4 x 3 x 2 x 1 
// fact(n ) = n x fact(n-1);

// ---- Imp ---- : base case - above : base case = 0! = 1 ; 
// btayega ki kahan rukna h


// ******** Bs ye chaiiye ******* 
// 1). : recursive relation 
// 2). : base case ( return likhna mandatory h );
// 3). : processing part 

#include <iostream>
using namespace std;

// Functions 

int fact(long long int n ){

    if(n == 0)
    return 1;
    return n * fact(n-1) ;
}

int power(long long int n ){

    if(n == 0)
    return 1;
     
    return 2 * fact(n-1) ;
}


int main() {


cout<< endl;


     
cout<< "factorial of 5 : "<< fact(11)<< endl ;
// cout<< "factorial of 0 : "<< fact(0)<< endl ;

cout<<



cout<< endl<< endl;
}