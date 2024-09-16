#include <bits/stdc++.h>
#include <string>
using namespace std;


int main() {
    // Your code here
    int t;
    cin>> t;
    while(t--){
        int num ;
        cin>>num;
        
        if(num <= 101 ) cout<< "NO"<<endl;
        else {
            string s = to_string(num);
            
            if(s[0] == '1' && s[1] == '0' ){
                if(s.size() > 3 && s[2] >= '1' ){ cout<< "YES"<<endl; } 
                else if(s.size() == 3 && s[2] >= '2'){cout<< "YES"<<endl;}
                else{cout<<"NO"<<endl;}
            }
            else{cout<<"NO"<<endl;}
        }
    }
    return 0;
}
// 7
// 100
// 1010
// 101
// 105
// 2033
// 1019
// 1002

// NO
// YES
// NO
// YES
// NO
// YES
// NO
