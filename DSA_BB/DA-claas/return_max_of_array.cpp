#include <iostream>
#include <limits.h>
using namespace std;

 int max_of_array(int *p , int size ){
    int i = 0 ;
    int ans = INT_MIN;
    // cout<< *(p+3)<< endl;

    while(i < size ) {
        if(  *(p+i) > ans  ) {
            cout<< "i : "<< i<< " *(p+i) : "<< *(p+i)<< endl;
            ans = *(p+i);
            i++;
        }
        else {
            i++;
        }



    }
        return ans ;

 }



int main() {


cout<< endl;

int arr[7] = {1,4,5,11,6, 10, 15}    ;
int * ptr =  arr ;
int size = 7;

cout<< "max of array : " << max_of_array(arr, size)<< endl;


cout<< endl<< endl;
}