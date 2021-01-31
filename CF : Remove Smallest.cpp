#include<bits/stdc++.h>
using namespace std;
void solve(){
     int n, num ;
     cin>>n;
     int arr[n];
     for(int i=0; i<n; i++){
          cin>>arr[i];
      } sort(arr, arr+n);    
     
     int count=0;
     for(int i=1; i<n; i++){
          //cout<<arr[i]<<" ";
          if(arr[i] - arr[i-1]>1){
               count =1;
               break;
          }
     }if(count){
          cout<<"NO"<<endl;
     }else{
          cout<<"YES"<<endl;
     }
}
int main(){
     int t;
     cin>>t;
     while(t--){
          solve();
     }
}