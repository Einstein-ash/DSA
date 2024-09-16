#include <iostream>
#include <string>
using namespace std;

void first_letter (string s ){
    int i = 0 ;
    cout<<s.at(0)<< endl;
    // cout<< s;
    // cout<< s.length();
    while (i<s.length() ){
        if(s.at(i) ==  ' '){
            cout<< s.at(i+1)<< endl ;
        }
            i++;

    }
}


int main() {


cout<< endl;


     string a = "Hello bro i am ash";

     first_letter(a);





cout<< endl<< endl;
}