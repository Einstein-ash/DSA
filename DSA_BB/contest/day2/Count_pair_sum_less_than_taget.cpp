#include <iostream>
#include <vector>
using namespace std;

int countPairs(vector<int> nums, int target) {
    
   
 int n = nums.size();
     int count = 0 ;
   
     for(int i =  0 ; i < n-1 ; i++ ){
        for (int j = i+1 ; j < n ; j++){
            
            if((nums[i] + nums[j] )< target){
        cout<< "nums["<<i<<"] + nums["<<j<<"] = "<< (nums[i] + nums[j] )<<endl;
                count++;
            }
        }
     }
        
        return count;
        
    }


int main() {
cout<< endl;


    //  int nums[5] = {-1,1,2,3,1};
    //  int n = 5;
    //  int nums[7] = {-6,2,5,-2,-7,-1,3};
    //  int nums[7] = {};
    //  int n = 0;
    //  int count = 0 ;
    // //  int target = 2;
    //  int target = -2;

    //  for(int i =  0 ; i < n-1 ; i++ ){
    //     for (int j = i+1 ; j < n ; j++){
            
    //         if((nums[i] + nums[j] )< target){
    //             cout<< "nums["<<i<<"] + nums["<<j<<"] = "<< (nums[i] + nums[j] )<<endl;
    //             count++;
    //         }
    //     }
    //  }

// cout<< "the num : " << count<< endl;

vector<int> nums2;
nums2.push_back(-6);
nums2.push_back(2);
nums2.push_back(5);
nums2.push_back(-2);
nums2.push_back(-7);
nums2.push_back(-1);
nums2.push_back(3);

cout<<"count :"<< countPairs(nums2, -2);
cout<< endl<< endl;
}