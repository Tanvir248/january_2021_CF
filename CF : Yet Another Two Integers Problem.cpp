// Yet Another Two Integers Problem
#include<bits/stdc++.h>
using namespace std;
using lln = long long int;
using lld = long double;
#define SIZE 100
void solve(){ 
       lln t;
     cin>>t;
     while(t--){
     
     lld a, b, x;
     lln y;
     cin>>a>>b;
     if(a>b){
          x = a-b;
      //y = a-b;
     }else{
          x = b-a;
        //  y = b-a;
     }
      y = x/10;
     x = x/10;
     //cout<<endl;
     if(x>y){
          cout<<y+1<<endl;
     }else{
          cout<<y<<endl;
     }
    }
}
int main(){

     
     solve();
     return 0;
}