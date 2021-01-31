#include<bits/stdc++.h>
using namespace std;
     int main(){
          string s;
          string x;
          
          getline(cin, s);
          getline(cin, x);
          for (int i = 0; s[i]!='\0'; i++) {
      if(s[i] >= 'A' && s[i] <= 'Z') {
         s[i] = s[i] + 32;
      }
   }
     for(int i =0;x[i]!='\0'; i++){
          if(x[i] >= 'A' && x[i] <= 'Z'){
          x[i]=x[i]+32;
          }
     }
     if(s==x){
          cout<<"0"<<endl;
     }else if(s<x){
          cout<<"-1"<<endl;
     }
     else{
          cout<<1<<endl;
     }
     return 0;
     }