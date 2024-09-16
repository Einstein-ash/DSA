// what i learnd/

// pair bnaoo 
// pair<int,int> p;
// p.first = 10;
// p.second = 1;
// Binary search interview qsn ( )

// __________ Problems _________

// 1) we have sorted array ,
// find the index of left and right occurence of a key
/// --- soln ----
// left alag se nikal , right alsg se 
// first occ, and last occ function  , and return pair<int , int > p;

// 2) find total no. of occurence, of an key , in a sorted array

// hint: first occ, and last occ, nikale, then ans = (last - first) +1 ;

// 3) .  leet code 852
// find the peak of mountain array
// like [0,0,1,2,1,0]
// here peak is 2

/*
      /0\
     /   \
    /     \
   /       \

  */
// hint: two parts h : left asc, desc, 
//  conditon k acc , left ya right chlo

// left and right  side sorted h , to
// agr arr[i] > arr[i+]: go right 
// agr arr[i] < arr[i+1] , then go left 

// also for peak element k liye 
// arr[i-1] < arr[i] > arr[i+1]

// to  ye 3 condition h, smjho aur code kro 

// Homework
// find pivot in a n array

  // solutions******************************
  //   1).
  // steps :
  // two parts m break krle , left occ nikale, then right occ,

  // i). Mid nikal le  & compare krle

  // ii). agr equal h then index store krale, and left chlaja

  // iii). again mid nakal le , and go to 1st step

#include <iostream>
using namespace std;

int LeftOcc(int arr[], int size, int key) {

  int s = 0;
  int e = size - 1;
  int mid = s + (e - s) / 2;
  int ansLeft = 0;

  while (s < e) {
    if (arr[mid] == key) {
      ansLeft = mid;
    } else {
      e = mid - 1;
    }
    mid = s + (e - s) / 2;
  }

  return ansLeft;
}

int RightOcc(int arr[], int size, int key) {

  int s = 0;
  int e = size - 1;
  int mid = s + (e - s) / 2;
  int ansRight = 0;

  while (s <= e) {
    if (arr[mid] == key) {
      ansRight = mid;
    } else {
      s = mid + 1;
    }
    mid = s + (e - s) / 2;
  }

  return ansRight;
}

// --------------main_______________________

int main() {


  int arr[9] = {1, 2, 3, 4, 4, 4, 4, 4, 10};
  int size = 9;
 for(int i = 0 ; i< size-1 ; i++) {
  cout<< arr[i]<<" ";
 }

}