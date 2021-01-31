#include<bits/stdc++.h>
using namespace std;
void solve(){
     int n;
     cin>>n;
     vector<int>jump1(n);
     for(int &x: jump1){
          cin>>x;
     }
     vector<int> jump2(n);
     for(int i=n-1; i>=0; i--){
          jump2[i]= jump1[i];
          int j = i+jump1[i];
          if(j<n){
               jump2[i]+=jump2[j];
          }
     }//int max= jump2[0];
     // for(int i=0; i<n; i++){
     //      if(max<jump2[i])
     //      max= jump2[i];
     // }
     cout<<*max_element(jump2.begin(), jump2.end())<<endl;
}
int main(){
     int t;
     cin>>t; 
     while(t--){
          solve();
     }
}