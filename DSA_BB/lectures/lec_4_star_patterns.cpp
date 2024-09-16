// ***** What i learnt ******


// print square : col <= num
// triangle : col <= num - row + 1
// reverse tri : col <= row 

#include <iostream>
using namespace std;

int main() {
  //****************************
  /// pattern of numbers

  /*
int n ,i=1,count=1;

cout <<" enter number  : ";
  cin>> n;

  while ( i<= n ) {

      int j=1;
      while( j<= n){
        cout<<" "<<i;
        count++;
        j++;
      }
    cout<<"\n";
    i++;
*/

  //********************************
  // star pattern
  /*
    int n,row=1;

    cout << "enter the number : ";
    cin>> n;

    while (row<=n){
       int column=1;

      // while(j<= n-i +1) {    // for reverse triangle
          while(column<= row) {         // for triangle

        cout<< " * ";
        column++;

      }
      cout<<"\n";
      row++;
    }
      */

  // to print
  //  1
  //  2 3
  //  4 5 6
  //  7 8 9 10
  //  . . . . .  .

  // int num , row=1, count =1;

  // cout << "Enter the number : ";
  // cin>> num;

  // while (row <= num){
  //   int column = 1;
  //    while (column <= row) {
  //      cout<< " "<<count;
  //      count ++;
  //      column ++ ;
  //    }
  // cout<<endl;
  //   row ++;
  // }

  // to print
  // 1
  // 2 3
  // 3 4 5
  // 4 5 6 7
  // ..........
  /*

 int num , row=1, count =1;

  cout << "Enter the number : ";
  cin>> num;

  while (row <= num ){
     int col = 1,count = row;
      while ( col <= row) {
        cout << " "<< count;
        count++;
        col ++;

      }
    cout<< endl;
    row ++;

    */

  // to print
  // 1
  // 2 3
  // 4 5 6
  // 7 8 9 10
  // . . . . . .

  //  int num , row=1, count =1;

  // cout << "Enter the number : ";
  // cin>> num;

  // while (row <= num ){
  //    int col = 1 ;
  //   while ( col <= row ){
  //     cout << " " << count ;
  //     count ++;
  //     col ++;

  //   }
  //   cout<<endl;
  //   row++ ;

  //**************************************

  // to print
  // 1
  // 2 1
  // 3 2 1
  // 4 3 2 1
  //   .......
  // . . . . . .

  // int num ,row=1, count= 1 ;

  // cout<< "Enter the number : ";
  // cin >> num;

  // while ( row <= num) {
  //   int col = 1 ;
  //   count = row;

  //   while ( col <= row)
  //     {
  //       // cout <<" " << count;    // can use both methods
  //       cout<< " " <<  row - col + 1;
  //       // count --;
  //       col ++;

  //     }
  //   cout<< endl ;
  //   row ++ ;
  // }

  //****************************************

  //   // to print
  // A A A . . .
  // B B B . . .
  // C C C . . .
  // . . . . . .

  //*****************************************

  //    int num , row=1, count =1;

  //   cout << "Enter the number : ";
  //   cin>> num;
  // // char ch= 65;            // method 1
  //   char ch;          // method 2

  //   while (row <= num ){
  //     int col = 1 ;
  //     while ( col <= num){

  //       // method 1
  //     //  cout <<" "<< ch ;

  //     // method 2
  //       char ch =  'A' + row - 1;
  //       cout << " "<< ch;

  //       col ++;
  //     }
  //     cout << endl ;
  //     ch ++;           // method 1

  //     row ++ ;

  //   }

  /// ***************************************

  //  to print
  // A B C .
  // A B C .
  // A B C .
  // A B C .
  //   .......
  // . . . . . .

  int num, row = 1, count = 1;

  cout << "Enter the number : ";
  cin >> num;

  //*********************8

  // while ( row <= num) {
  //     int col = 1 ;
  //     // char ch = 65;           // method 1
  //   while ( col <= num){
  //     //method 1
  //     // cout << " " << ch;

  //     // method 2
  //     char ch= 'A' + col -1;
  //     cout << " " << ch;

  //     // ch++ ;           // method 1
  //     col ++ ;

  //   }
  //   cout << endl ;
  //   row ++;
  // }

  // *******************************************

  // while ( row <= num) {
  //     int col = 1 ;

  //   while ( col <= num){

  //     char ch= 'A' + count -1;
  //     cout << " " << ch;

  //     col ++ ;
  //     count ++;

  //   }
  //   cout << endl ;
  //   row ++;
  // }

  //*************************************

  // char ch;
  // int i=0;
  // while ( row <= num) {
  //     int col = 1 ;

  //   while ( col <= num){

  //     char ch= 'A'+ i + col -1;
  //     cout << " " << ch;

  //     col ++ ;

  //   }
  //   cout << endl ;
  //   i++;
  //   row ++;
  // }

  //*************************************
  // A
  // B B
  // C C C
  // D D D D

  // while ( row <= num)
  //  {
  //     int col = 1 ;

  //     while ( col <= row)
  //     {
  //        char ch= 'A' + row -1;
  //         cout << " " << ch;
  //         col ++ ;
  //    }
  //   cout << endl ;
  //   row ++;
  // }

  //*************************************
  // A
  // B C
  // C D E
  // D E F G
  // int i=0;
  //   while (row <= num) {
  //     int col = 1;

  //     while (col <= row) {
  //       // char ch = 'A' + i + col - 1;
  //       // or
  //       char ch = 'A' + row + col - 2;

  //       cout << " " << ch;
  //       col++;
  //       count++;
  //     }
  //     cout << endl;
  //   i ++;
  //     row++;
  //   }

  //*************************************
  // D
  // C D
  // B C D
  // A B C D

  // int i=1;
  //   while (row <= num) {
  //     int col = 1;

  //     while (col <= row) {
  //       // char ch ='A' + col + num - row - 1 ;
  //       /

  //       cout << " " << ch;
  //       col++;
  //       count++;
  //     }
  //     cout << endl;
  //   i ++;
  //     row++;
  //   }

  //  //*************************************
  //  * * * * *
  //  * * * *
  // * * *
  // * *
  // *

  // int i=1;
  //   while (row <= num) {
  //       int col = 1;

  //     while ( col <= num - row + 1 ){
  //       cout<< " * ";

  //       col ++;
  //     }
  //     cout << endl ;
  //     row ++;
  //   }

  //  //*************************************
  // * * * * *
  //   * * * *
  //     * * *
  //       * *
  //         *

//   int i=1;
//     while (row <= num) {
//         int space = 1;

//       while ( space <= row -1)
//       {
//         cout << "   ";
//         space ++;
//       }
//      int col = 1 ;
//       while ( col <= num - row + 1 )
//         {
//           cout << " * ";
//           col ++;
//        }
//       cout << endl;
//       row ++;

//     }

  //  //*************************************
  // 1 1 1 1
  //   2 2 2
  //     3 3
  //       4

  // int i=1;
  //   while (row <= num) {
  //       int space = 1;

  //     while ( space <= row -1)
  //     {
  //       cout << " ";
  //       space ++;
  //     }
  //    int col = 1 ;
  //     while ( col <= num - row + 1 )
  //       {
  //         cout <<row ;
  //         col ++;
  //       }
  //     cout << endl;
  //     row ++;

  //   }

  //     //  //*************************************
  //    // 1 2 3 4
  //    //   2 3 4
  //    //     3 4
  //    //       4

  // int i=1;
  //  while (row <= num) {
  //      int space = 1;

  //    while ( space <= row -1)
  //    {
  //      cout << "  ";
  //      space ++;
  //    }
  //   int col = 1 ;
  //    count = row;
  //    while ( col <= num - row + 1 )
  //      {
  //        cout << count<< " " ;
  //        col ++;
  //        count ++;
  //      }
  //    cout << endl;
  //    row ++;

  //  }

  //*************************************
  //       1
  //     2 2
  //   3 3 3
  // 4 4 4 4

  // int i=1;
  //   while (row <= num) {
  //       int space = 1;

  //   while (space <= num - row )
  //   {
  //     cout << " ";
  //     space ++ ;
  //   }

  //   int col =1 ;
  //   while ( col <= row)
  //     {
  //       cout<< row;
  //       col ++;
  //     }
  //   cout<< endl ;
  //   row++ ;

  // }

  // *****************************
  //       1
  //     2 3
  //   4 5 6
  // 7 8 9 10

  //     while (space <= num - row )
  //   {
  //     cout << "  ";
  //     space ++ ;
  //   }

  //   int col =1 ;
  //   while ( col <= row)
  //     {
  //       cout<< " "<<count;
  //       col ++;
  //       count++;
  //     }
  //   cout<< endl ;
  //   row++ ;

  // }

  //     //  //*************************************
  //       1
  //     1 2 1
  //   1 2 3 2 1
  // 1 2 3 4 3 2 1

  //   int i = 1;
  //   while (row <= num) {
  //     int space = 1;

  //     /// to print space
  //     while (space <= num - row) {
  //       cout << " ";
  //       space++;
  //     }
  // // to print first triangle

  //     int col = 1;
  //     while (col <= row) {
  //       cout << col;
  //       col++;
  //     }
  // // to print 2nd triangle
  //     int col2 = 1, count = row - 1;
  //     while (col2 <= row - 1) {
  //       cout << count;
  //       count--;
  //       col2++;
  //     }

  //     cout << endl;
  //     row++;
  //   }

  //   //     //  //*************************************
  //   // 1 2 3 4 5 5 4 3 2 1
  //   // 1 2 3 4 * * 4 3 2 1
  //   // 1 2 3 * * * * 3 2 1
  //   // 1 2 * * * * * * 2 1
  //   // 1 * * * * * * * * 1

  //   while ( row <= num){

  //   int col = 1;
  //   while (col  <= num - row + 1 ) {
  //    cout << " "<< col <<" ";
  //     col ++ ;
  //   }

  //   // to print the *
  //    col = 1;
  // while ( col <= row - 1  ){
  //   cout << " * ";
  //   col ++ ;
  // }

  //   // to print next star pattern
  //    col = 1;
  //   while ( col <= row - 1){
  //     cout << " * ";
  //     col ++ ;

  //   }

  //   // to print next number pattern

  //    col =  1;
  //   count = num - row + 1 ;
  //    while (  col <= num - row + 1){

  //      cout << " " << count << " " ;
  //      count --;
  //      col ++ ;
  //    }

  //   cout << "\n" ;
  //   row ++ ;

  //     //  //*************************************
  // method 2
  // 1 2 3 4 5 5 4 3 2 1
  // 1 2 3 4 * * 4 3 2 1
  // 1 2 3 * * * * 3 2 1
  // 1 2 * * * * * * 2 1
  // 1 * * * * * * * * 1

  //   while ( row <= num){

  //   int col = 1 ;
  //      while (col <= num - row + 1){
  //        cout<<col;
  //        col ++ ;
  //      }

  //     // print star
  //     col = 1;
  //     while( col <= row - 1 ){
  //       cout<< "**";
  //       col ++;
  //     }

  //     // print revese pattern
  // col =1 ;
  //     count = num - row + 1 ;
  //     while ( col <= num - row + 1){
  //       cout<<count ;
  //       count --;
  //       col ++ ;
  //     }
  // cout<< endl ;
  // row++ ;

  // }

  // ***********************



while( row <= num ){
    int space = 1 ;


    while( space <= (num - row)){
        cout<< " ";
        space ++;
    }
        int col = 1;

            while(col <= row ){
                cout<< "*";
                 col ++;
       }
                     
    cout<< endl;
    row ++;
}

}