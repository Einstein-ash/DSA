#include <iostream>
#include <limits.h>
using namespace std;

bool checkNum (string ans_Str , int k , bool porn ) {

  string i_max = to_string(INT_MAX);
  string i_min = to_string(INT_MIN);


if(porn){

for( int i = 0 ; i< k  ; i++ ) {
    if( ans_Str[i] > i_max[i] ){ 
        return false ;

    }
}
}

else {

for( int i = 0 ; i< k  ; i++ ) {
    if( ans_Str[i] > i_min[i] ){ 
        return false ;

    }
}
}
return true;

}

int strTOint(string s ){
// cout<< "helo iside ";
     int i = 0 ;  int ans = 0 ;   int count = 0 ;
    bool PorN = false ;
    cout<<s.size()<<endl;

  while(i < s.size()){
cout<<i<<endl;
if(s.at(i) == '.')
    {break;}

else if(s.at(i) == '-' )
{
    // cout<< "ture";
    PorN = true;
    i++;
}

if(i < s.size() && s.at(i) == ' '  )
{
    
    i++;
    continue;
}
if(i < s.size() && (s.at(i) >= 'a' &&  s.at(i) <= 'z' || s.at(i) >= 'A' &&  s.at(i) <= 'Z')) {
    break;
}

if(i < s.size() &&  s.at(i) >= '0' &&  s.at(i) <= '9'  ){

            int digit = s.at(i);
    
            ans = (ans * 10 ) + digit-48;
            string ans_str = to_string(ans);
            count ++;
            i++;
            // if( count > 10 & PorN & s.at()) {
            //     return INT_MIN;
            // }
            
            // else{return INT_MAX;}

            if( count == 10 ) {
             bool flag =  checkNum(ans_str, 10 , PorN);
                if(PorN && !flag ){
                    return INT_MIN;
                }
                else {
                    return INT_MAX;
                }



            }
            
            
}
  }

if(PorN) {
return -ans;
}
// int ans2  = INT_MIN;
return ans;
// if(ans < INT_MIN)
//     return INT_MIN;

// if(ans > INT_MAX)
// return INT_MAX;


        //  cout<< ans;

        return ans;
}


int main() {
cout<< endl;

string s = "-";
     
cout<< strTOint(s);

// cout<<s.size();

cout<< endl<< endl;
}