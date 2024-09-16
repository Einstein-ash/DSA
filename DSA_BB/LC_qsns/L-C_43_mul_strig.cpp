#include <iostream>
using namespace std;

long long int str_to_int( string str ){
    int digit ;
    long long int ans = 0 ;
    int i = 0 ;

    while( i < str.length()){
        digit = str[i] - '0';
        ans = ans*10 + digit ;
        i++;
    }

    return ans ;
}

string multiply(string num1 , string num2 ){

    int nums1 = str_to_int(num1);
    int nums2 = str_to_int(num2);

    int answer = nums1 * nums2;


}


int main() {
cout<< endl;

string str = "353657446355633574";

cout<<str_to_int (str);
    


cout<< endl<< endl;
}