#include<bits/stdc++.h>
using namespace std;
void solve(){
     
}
int main(){
     int t;
     cin>>t;
     while(t--){
     int m, n ,num;
     vector<int>arr;
     cin>>m>>n;
     for(int i=0; i<m; i++){
          cin>>num;
          arr.push_back(num);}
        sort(arr.begin(), arr.end());
  for(int i=0; i<m; i++){
     if(arr.back()<=n || arr[0]+arr[1]<=n){
          cout<<"YES"<<endl;
          break;
     }else{
          cout<<"NO"<<endl;
          break;
     }
     }
     }
     return 0;
}