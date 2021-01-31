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
        int n;
        cin>>n;
     int count21 = n%2020;
     int count20 = (n-count21)/2020-count21;
     if(count20>=0&& 2020*count20+ 2021*count21 ==n){
          cout<<"YES"<<endl;
     }else{
          cout<<"NO"<<endl;
     }
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