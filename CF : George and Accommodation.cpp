#include<bits/stdc++.h>
using namespace std;
int main(){
     vector<int> capacity;
     vector<int> rooms;
     int m , n, count =0;
     int t;
     cin>>t;
     for(int i=0; i<t; i++){
          cin>>m>>n;
          
          if(m<n-1){
               count++;
          }

     }
     cout<<count<<endl;
     return 0;
}