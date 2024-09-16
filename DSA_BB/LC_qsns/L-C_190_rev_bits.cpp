#include <iostream>
#include <math.h>

using namespace std;


int reverse_bits ( int bits ){
        int ans = 0 ;  int digit  = 0;
        while(bits != 0 ){

        digit = bits % 10 ;
        ans = (ans * 10 ) + digit ;
        bits /=10;
        }
        return ans ;
    }

int bits_to_num(int r_bits) {
    int ans = 0 ; int i = 0 ;
    while( r_bits != 0 ) {
        int digit = r_bits % 10 ;
        if(digit == 1 ){
            ans = pow(2,i) + ans ;
        }
        r_bits /= 10 ;
        i++;
        
    }
    return ans ;
}


uint32_t reverseBits(uint32_t n) {
    //    int  reversed = reverse_bits(n) ;
    //    int answer = bits_to_num(reversed) ;

       return n;
     
    }
int main() {
cout<< endl;

uint32_t n = 00000010100101000001111010011100;

// cout<< reverse_bits(n);
     
cout<< reverseBits(n);

cout<< endl<< endl;
}