
#include<bits/stdc++.h>
using namespace std;
using lln = long long int;
#define SIZE 100
void solve(){ 
     lln count=0;
     lln house[1000000];
          lln m, n, number;
          cin>>m>>n;
         for(lln i=0; i<n; i++){
              cin>>house[i];
              
              }
              count += house[0]-1;
              for(int i=0; i<n-1; i++){
               if(house[i]>house[i+1]){
                   count+= (m - (house[i]-(house[i+1])));
              }else if(house[i]<house[i+1]){
                   count += house[i+1] - house[i] ; 
              }
              
         }
         //cout<<"C3   "<<count<<endl;
         cout<<count<<endl;
}
int main(){
     solve();

     return 0;
}