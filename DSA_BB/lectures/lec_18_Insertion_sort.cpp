#include<iostream>
using namespace std; 

// insertion sort 
 int insertionSort(int arr [] , int n ){
    for(int i = 1; i< n ; i++){
        int temp = arr[i];
        int j ; 

        for(j = i-1 ; j>= 0 ; j--)
        {
            if(arr[j] > temp )
            {   // shift krde yaar left mai

                arr[j+1]  = arr[j] ;
            }
            else {break;}
        }
        arr[j+1] = temp;

    }
 }

int main(){

int nums[5] = {2,38,5,1,14} ;

insertionSort(nums, 5);
 for(int i = 0 ; i< 5 ; i++){
    cout<< nums[i]<<" ";
 }
}