#include<bits/stdc++.h>
using namespace std;
using lln = long long int;
#define SIZE 100
void solve(){ 
     lln n, number, count =0;
     cin>>n;
     vector<int >arr[n];
     for(int i=0; i<n; i++){
          cin>>number;
          arr.push_back(number);
          }
          int max  = arr[0];
          int min = arr[0];
          for(int i=0; i<n; i++){
          
          if(arr[i]>max){
               max = arr[i];
             count++;
             
          }
          if(arr[i]<min){
               count++;
          }
     }
     cout<<count<<endl;
}
int main(){
     solve();
     return 0;
}