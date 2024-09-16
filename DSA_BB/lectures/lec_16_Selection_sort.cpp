//************ Selection Sort ***********

#include <iostream>
using namespace std;

int SelectionSort(int arr[] , int n )
{
    //for round iteration 
    for(int i = 0 ; i< n-1; i++)
    {
        for(int j= i + 1; j< n ; j++){
            if(arr[i]> arr[j])
                swap( arr[i], arr[j]);
        }
   
    }
}

int main(){

int nums[5] = {2,38,5,1,14} ;

 SelectionSort(nums, 5);
 for(int i = 0 ; i< 5 ; i++){
    cout<< nums[i]<<" ";
 }

}