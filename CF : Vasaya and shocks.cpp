#include<bits/stdc++.h>
using namespace std;
using lln = long long int;
using ls = string;
using ch = char;
using lld = long double;
using lf = float;
using ll= int;
using ld = double;
#define SIZE 100
void solve(){ 
     ll n,m,sum,a,b;
    cin>>n>>m;
    sum=n;
    while(true){
        a=n/m;
        b=a+(n%m);
        n=b;
        sum+=a;
        if(b<m)
            break;
    }
    cout<<sum<<endl;
  
}
int main(){
     
     solve();

     return 0;
}