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
          int a, b;
          cin>>a>>b;
     int x = max(2*a, b);
     int y = max(2*b, a); 
     cout<<pow((min(x, y)),2)<<endl; 
}
int main(){
     lln t;
     cin>>t;
     while (t--)
     {
          
     solve();
    
     }
     return 0;
}