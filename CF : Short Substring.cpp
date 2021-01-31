#include<bits/stdc++.h>
using namespace std;
using lln = long long int;
#define SIZE 100
void solve(){ 
     int t;
     cin>>t;
     while(t--){
              char s[1001];
          cin>>s;
          int x = strlen(s);
              cout<<s[0];
          for(int i=1; i<x; i+=2){
               cout<<s[i];
               }
               cout<<endl;
          }
}     
int main(){
    
     solve();
     

     return 0;
}