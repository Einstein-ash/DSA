#include <iostream>
# include <vector>

using namespace std ;


 void rotate(vector<int>& nums, int k) {
  
        int end = nums.size() -1 ;

       for(int i= 0 ; i < k ; i++) {
            int temp = nums[0];
            nums[0] = nums[end];

            for(int j= end  ; j>1; j-- ){
              nums[j]  = nums[j-1];
            }

            nums[1] = temp;
     }
        
    }

// print the array 

void print(vector<int>array , int size ){
    for(int i = 0 ; i< size ; i++){
        cout<< array[i]<<" ";
    }
cout<< endl;
}

int main () {

   vector< int> arr= {1,2,3};
//    vector< int> arr= {1,2,3,4,5,6,7};


    rotate(arr, 4);

    print(arr,3);
}