#include<bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using lln = long long int;
using ls = string;
using ch = char;
using lld = long double;
using lf = float;
using ll= int;
using ld = double;
#define SIZE 100
void solve(){ 
     
  lln n;
  cin>>n;
   if(n>0) {
      while(n%2 == 0) {
         n/=2;
      }
      if(n == 1) {
         cout<<"NO"<<endl;
      }
   }
   if(n == 0 || n != 1) {
      cout<<"YES"<<endl;
   }
     }

int main(){
     int t;
     cin>>t;
     while (t--)
     {
          solve();
     }
     return 0;
}