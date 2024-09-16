#include <iostream>
#include <vector>
using namespace std;

 int searchInsert(vector<int>& nums, int target) {
        int s = 0 ; int e = nums.size() -1;
        int mid = s + (e - s)/2;
 
        while(s < e ){
          
            if(nums[mid] == target )
            { 
                
                return mid ;
            }

            else if( nums[mid] > target ){
                
                e = mid ;
            }
            else {
             
                s = mid + 1 ;
            }

            mid = s + (e - s)/2;
        }
        return mid + 1;
    }

int main() {

    vector<int > arr;
    arr.push_back(1);
    arr.push_back(3);
    arr.push_back(5);
    arr.push_back(6);

cout<< " 9 shld be at index : "<< searchInsert(arr,9);

cout<< endl;


     
// cout<< arr.size();




cout<< endl<< endl;
}