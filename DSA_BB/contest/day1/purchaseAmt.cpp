#include <iostream>
using namespace std;

  
          int accountBalanceAfterPurchase(int purchaseAmount) {
         if(1 <= purchaseAmount &&  purchaseAmount <= 4){
             return 100;
         }
        
        else if( purchaseAmount == 0 || 5 <= purchaseAmount && purchaseAmount <= 14){
            return 90;
        }
        else if(15 <= purchaseAmount && purchaseAmount  <= 24){
            return 80;
        }
        else if(25 <= purchaseAmount && purchaseAmount <= 34){
            return 70;
        }
        else if(35 <= purchaseAmount && purchaseAmount <= 44){
            return 60;
        }
        else if(45 <= purchaseAmount && purchaseAmount <= 54){
            return 50;
        }
        else if(55 <= purchaseAmount && purchaseAmount <= 64){
            return 40;
        }
        else if(65 <= purchaseAmount && purchaseAmount <= 74){
            return 30;
        }
        else if(75 <= purchaseAmount  && purchaseAmount  <= 84){
            return 20;
        } 
           else if(85 <= purchaseAmount  && purchaseAmount  <= 95){
            return 10;
        }
      
        
        return 0;
    }

int main() {


cout<< endl;
int n = 0 ; 

     while(n >0 ){
    
cin>> n ;

cout<< "for "<< n << " : " << accountBalanceAfterPurchase(n) << endl ;
     }




cout<< endl<< endl;
}