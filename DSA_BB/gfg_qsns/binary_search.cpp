#include <iostream>
using namespace std;

//  int binarysearch(int arr[], int n, int k) {
    //     // code here
    //     int s = 0 ; int e = n- 1 ; 
    //     int mid = s + (e-s)/2;
    //     cout<<"helo "<< endl;
    //     while(s<=e){
           
    //          if(arr[mid] == k ){
    //             return mid;
    //         }
            
    //         if(arr[mid] < k ){
    //            s = mid + 1;
    //         }

    //         else if(arr[mid] >  k ){
    //             e = mid;
    //         }
            
    //         mid = s + (e-s)/2;
    //     }
        
    //     return -1;
    // }



     int binarysearch(int arr[], int n, int k ,int  s , int e ) {

        int mid = s + (e-s )/2;

         if(s<e){
            if(arr[mid] == k ){
                
            return mid;
            }
        }

        if(s > e ){ 
            // cout<< mid<<" ";
            //   cout<< "(s > e "<< endl;
            return -1;
        }

        if(arr[mid] < k ){
            //  cout<< mid<<" ";
            //  cout<< "(arr[mid] < k )"<< endl;
            return binarysearch( arr,n-1 , k , mid +1 , e );
        }
        if(arr[mid] > k ){ 
            // cout<< mid<<" ";
            // cout<< "(arr[mid] > k )"<< endl;
            return binarysearch( arr,n -1, k , s , mid );
        }

        // cout<< "out "<< endl;
        return -1;
    }

int main() {
cout<< endl;


    //  int arr [10] = {1,2,3,4,5,6,7,8,9,10};
     int arr [100] = {1,2,3,4,5,6,7,8,9,10,11,12,13,15,17,18,19,20,21,22,25,26,27,29,31,32,33,35,36,40,41,42,43,46,47,48,51,54,55,56,57,58,61,63,64,65,67,69,71,74,77,78,79,80,81,82,83,85,86,87,88,89,90,91,93,95,99,100};

     int n = 68 ;

     int k = 2;
int mid;
    cout<<  binarysearch(arr, n , k , 0 , n-1 );
    // cout<< "arr";


cout<< endl<< endl;
}