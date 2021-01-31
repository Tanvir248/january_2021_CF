#include<bits/stdc++.h>
using namespace std;
using lln = long long int;
void solve(){
     lln w, h, n;
     cin>>w>>h>>n;
    int count =1;
     while (w%2==0)
     {
       w/=2;
       count *=2 ;  
     }
      while (h%2==0)
     {
       h/=2;
       count *=2 ;  
     }
     if(count>=n){
          cout<<"YES"<<endl;
     }else{
          cout<<"NO"<<endl;
     }
}
int main(){
     int t;
     cin>>t;
     while (t--)
     {
          solve();
     }
     return 0;
}
/*#include<iostream>
using namespace std;
int main(){
     int t, ans1=0,count=0, count1=0, count2=0, count3=0;
      int w[100], h[100], n;
     cin>>t;
     for(int i=0; i<t; i++)
     {
    
     cin>>w[i]>>h[i]>>n;
     if((w[i]%2!=0 && h[i]%2!=0)){
          ans1 = w[i]*h[i];
          count++;
     }
     else if(w[i]%2==0 && h[i]%2!=0){
          ans1= w[i]/2*h[i];
          count1++;
     }
     else if(w[i]%2!=0 && h[i]%2==0){
         ans1 = h[i]/2*w[i];
     count2++;
     }
     else if(w[i]%2==0 || h[i]%2==0){
          ans1= w[i]/2*h[i];
               count3++;
     }
     int ans =count+count1+count2+count3; cout<<"Ans->"<<ans<<endl;
     if(ans>=n){
          cout<<"YES"<<endl;
     }else{
          cout<<"NO"<<endl;
     }
     }
     
     
}*/