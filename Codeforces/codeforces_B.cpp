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
            int a;
            cin>>a;
            arr.push_back(a);
        }
        
        set<int> st;
        st.insert(arr[0]);
        bool check = true;
        
        for(int i =1; i<arr.size() ; i++){
            if((st.find(arr[i] - 1 ) == st.end())
            && (st.find(arr[i] + 1 ) == st.end()) ){
                cout<<"NO"<<endl;
                check = false;
                break;
            }
            st.insert(arr[i]);
        }
        if(check){
            cout<<"YES"<<endl;
        }
    }
    return 0;
}