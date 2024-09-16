// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    // Write C++ code here
    // std::cout << "Try programiz.pro";
    
    int t;
    cin>>t;
    
    while(t--){
     int n ;
     cin>>n;
     
     vector<vector<char>> vec;
     
     vector<int> ans;
     
     
     cout<<endl;
     for(int i = 0 ; i< n ;i++ ){
         cout<<"chekiiii"<<endl;
         vector<char> small;
         for(int j = 0 ; j < 4 ;j++){

            char c;
             cin>>c;
             
             cout<<" "<<c;
             
             small.push_back(c);
         }
         vec.push_back(small);
         cout<<endl;
     }
     
     cout<<"check "<<endl;
     for(int i = n-1 ;i >=0 ; i-- ){
         cout<<endl<<" i ; "<<i<<endl;
        for(int j = 0 ; j < 4 ;j++){
            
            cout<<vec[i][j]<<" ";
            
                if(vec[i][j] == '#') {
                    
                //     cout<<(j+1)<<" c: "<<vec[i][j];
                //     break;
                // }
            }
            // cout<<endl;
        }
            cout<<endl;
     
    }

    return 0;
}
}