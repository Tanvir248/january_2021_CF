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
     vector<int> icpc;
     ll n, m, ans, num , count=0;             
     cin>>n>>m;
     for(int i =0; i<n; i++){
          cin>>num;
          icpc.push_back(num);
     }sort(icpc.begin(), icpc.end());
     for (ll i = 0; i < n; i++)
     {
          if(5-icpc[i] >= m){
               count++;
          }
     }//cout<<count<<endl;
     ans = count/3;
     cout<<ans<<endl;
}
int main(){
     
     solve();

     return 0;
}