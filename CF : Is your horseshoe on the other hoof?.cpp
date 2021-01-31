//Is your horseshoe on the other hoof?
#include<bits/stdc++.h>
using namespace std;
void solve(){
     vector<int> arr;
     int num, count=0;
     for(int i=0; i<4; i++){
          cin >>num;
          arr.push_back(num);
          sort(arr.begin(), arr.end());
     } 
     for(int i=0; i<4; i++){
         // cout<<arr[i]<<" ";
          if(arr[i]==arr[i+1]){
               count++;
          }
          }
     cout<<count<<endl;
}
int main(){
     solve();
     return 0;
}
/*#include<iostream>
using namespace std;
using lln = long long int;
int main(){
     lln a, b, c, d;
     cin>>a>>b>>c>>d;
     int count =0;
     while(1){
     if(a==b&&b==c&c==d){
          count=3;
          break;
     }
     else if(b==c&&c==d){
          count=2;
          break;
     }
     else if(a==c && a==d){
          count =2;
          break;
     }
     else if(c==d){
          count++;
          break;
     }else if(b==d){
          count++;
     
     break;}
     else if(a==c){
          count++;
     
     break;}
     else if(a==d){
          count++;
     
     break;}}
     cout<<count<<endl;
}*/