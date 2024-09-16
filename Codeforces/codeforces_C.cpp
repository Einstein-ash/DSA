#include <bits/stdc++.h>
#include <string>
using namespace std;


int main() {
    // Your code here
    int t;
    cin>> t;
    while(t--){
        int n ;
        cin>>n;
        vector<int> arr;
        
        while(n--){
            int a ;
            cin>> a ;
            arr.push_back(a);
        }
        
        int m ;
        cin>>m ;
        
        vector<string> str;
        
        while(m--){
            string s ;
            cin>>s;
            str.push_back(s);
        }
        
        for(int i =0; i< str.size(); i++){
            map<int,char> mp;
            map<char,int> mp2;
            // mp[arr[0]] = str[0][0];
            // mp2[str[0][0]] = arr[0];
            bool check = true;
            
            if(str[i].size() != arr.size()){cout<<"NO"<<endl; continue; }
            
            for(int j=0; j< str[i].size() ; j++){
                
                if(mp.find(arr[j]) == mp.end() 
                && mp2.find(str[i][j]) == mp2.end())
                {
                    mp[arr[j]] = str[i][j];
                    mp2[str[i][j]] = arr[j];
                }
                else if(mp.find(arr[j]) != mp.end()){
                    auto it = mp.find(arr[j]);
                    if(it->second != str[i][j]){cout<<"NO"<<endl; check = false; break; }
                }
                else if(mp2.find(str[i][j]) != mp2.end()){
                    auto it = mp2.find(str[i][j]);
                    if(it->second != arr[j]){cout<<"NO"<<endl;check = false; break; }
                }
                // else{
                //     cout<<"YES"<<endl;
                // }
                // j wala for loop ka end niche;

            }
            // i wala for loop end below
                if(check) {cout<<"YES"<<endl;}           
        }
        
        
    }
    return 0;
}

// 1
// 5
// 3 5 2 1 3
// 2
// abfda
// afbfa

// YES
// NO
// YES
// NO
// NO
// NO
// YES
// NO
// YES


