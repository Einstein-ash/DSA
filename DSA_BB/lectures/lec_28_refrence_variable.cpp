#include<iostream>
using namespace std ;

// void update (int n){   // int n: pass by value (n)
void update (int &n){   // int n: pass by reference (&n)
    n = n+1 ;
}

int & func(int a ){

    int num = a;
    int & ans = num ;  // but num has life span upto funciton {func}
    return ans ;   // bad practice : address will not be available 
}


int * fun(int n ){
    int * ptr = & n ;
    return ptr;    // same dikkat aayegi , fucntion k bahr jane k baad , ptr m jo address hoga, vo available hi nhi hoga, so its a bad practice
}
int main(){
/*

    int i = 5 ;
    int &j = i; 

    cout<< "i : "<<i << endl ;
    cout<< "j : "<< j << endl ;


    cout<< "++j : "<< ++j << endl ;
    cout<< "++i : "<<++i << endl ;
*/

// int n = 5 ;
// int &j = n;
// cout<< "before : "<< n<< endl ;
// update (j); // {j} and {i} has same addreass
// cout<< "after : "<< n<< endl ;




//************* Dynamic allocation ***************

            int * arr = new int [5];
//               /         \
//              /           \
//          stack           heap ( only return address )
//           /                \
// static allocation          dynamic allocation

int n ;
// cin>> n ;

// int arr[n];                  // bad practice 
// int * arr2 = new int [n];    // good practice


// difference bw static and dynamic allocaiton 

/*
        static             |             dynamic 
                           |
int arr[50];               |        int * arr = new int[50]
int arr[n];  bad practice  |        int * arr = new int[n]  goood practice
                           |               /         \
50 x 4 = 200 bytes         |             8   +   {50 x 4 } 

memory kam                              memory jyada 

*/

/*
        above, in static passing varibale as size of arr - bad practice bocz-
        size allocation will be done in run time, which {may} lead to space error, like
                    Memory types 
                  /            \
                /               \
         stack (small)          heap (large)
            /                      \
        static alloc              dynamic alloc    

        so we should give size so that all the memory that i going to be used in our program will be available during compile time, 

        still if want to give variable size :    dynamically allocate it in heap memory ( using {new} keyword )

        Note : it only require data type and doesn't have new to the place and returns onlly the address of the place ;



*/

// static allocation 

while(true){
    int i;
    cout<<i;    // sirf andr andr available h
    //  i = 5;
    cout<<i;    // dirf andr andr available h
}                  // bahr jate hi auto delete ho jayega 

// byanak cheez 

// while(true ){
//     int *ptr = new int;   // int k liye memory se space mangega
// }                        // bnata rhega, delete nhi hoga , fir memory fill hone k baad program crash kr jayega

cout<<"hello:";
}