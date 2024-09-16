#include<iostream>

using namespace std ;

int main () {

    int x = 143 ; 
    int num = 0 ;
    int s = 0 ;

     while(x != 0 ){
             
            s = x % 10;
            num = (num * 10 ) + s;
            x /= 10;
        }

        cout<< endl << num<<endl ;

}