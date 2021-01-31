#include<iostream>
using namespace std;
void solve(){
     int n, arr[101];
     cin>>n;
     for(int i=0; i<n; i++){
          cin>>arr[i];
     }
      for(int j=1; j<=n; j++){
           for(int i=0; i<n; i++){
                if(arr[i]==j)
                {        cout<<i+1<<" ";
           }
          }
      }
}
int main(){
     solve();
     return 0;
}