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
          int a,b,i,ans=1;
    cin>>a>>b;
    for(i=1;i<=min(a,b);i++)
    {
            ans*=i;
    }
    cout<<ans<<endl;
}
int main(){
     
     
          
     solve();
    
     
     return 0;
}