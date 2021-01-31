#include<bits/stdc++.h>
using namespace std;
void solve(){
     int m, n;
     cin>>m>>n;
     int sum =0;
     for(int i=1; ; i++){
          sum +=m;
          if(sum %10 == 0 || sum %10 == n){
               cout<<i<<endl;
               break;
          }else 
          continue;
     }
}
int main(){
     solve();
     return 0;
}