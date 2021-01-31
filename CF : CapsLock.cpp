#include<bits/stdc++.h>
using namespace std;
     int main(){
          string s;
          
          getline(cin, s);
          for (int i = 0; s[i]!='\0'; i++) {
      if(s[i] >= 'a' && s[i] <= 'z') {
         s[i] = s[i] - 32;
      }
   }
     for(int i =1; s[i]!='\0'; i++){
          if(s[i] >= 'A' && s[i] <= 'Z'){
          s[i]=s[i]+32;
          }
     }
     cout<<s<<endl;
     return 0;
     }