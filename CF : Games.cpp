#include<iostream>
using namespace std;
void input(int n){
     int arr1[101], arr2[102];
    for(int i=0; i<n; i++){
          cin>>arr1[i]>>arr2[i];
     }
     
}
void solve(int n){
    int ans =0;
    int arr1[101], arr2[102];
     for(int i=0; i<n; i++){
          for(int j=0; j<n; j++){
               if ( i != j && arr1[i] == arr2[j])
               {
                ans++;
               }
               
          }
     }
     cout<<ans<<endl;
}
int main(){
    int number;
    cin>>number;
    input(number);
    solve(number);
    return 0;
}
/*#include<bits/stdc++.h>
using namespace std;
void solve(int n){
     int arr1[101], arr2[102];
     int ans =0;
     for(int i=0; i<n; i++){
          cin>>arr1[i]>>arr2[i];
     }
     for(int i=0; i<n; i++){
          for(int j=0; j<n; j++){
               if ( i != j && arr1[i] == arr2[j])
               {
                ans++;
               }
               
          }
     }
     cout<<ans<<endl;
}
int main(){
     int number;
     cin>>number;
     solve(number);
     return 0;
}*/