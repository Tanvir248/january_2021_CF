#include<bits/stdc++.h>
using namespace std;
using lln = long long int;
#define SIZE 100
void solve(){
     string dub;
     int flag =1;
     cin>>dub;
     for(int i=0; i<dub.size(); i++){
          if(dub[i]=='W' && dub[i+1]== 'U' && dub[i+2]=='B'){
               i=i+2;
               if(!flag){
                         cout<<" ";
               }continue;
          }else {
               flag=0;
               cout<<dub[i];
          }
     }
}
int main(){
     solve();
    
     return 0;
}