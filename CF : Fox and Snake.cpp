#include<bits/stdc++.h>
using namespace std;
void solve(){
     int n, m;
     cin>>n>>m;
     for(int i=1; i<=n;i++){
         if(i%4==0){
              cout<<"#";
               for(int i=1; i<m; i++){
                    cout<<".";
               }
               cout<<endl;
             
          } 
          if(i%2!=0){
                for(int i=1; i<=m; i++){
                    cout<<"#";
               }cout<<endl; 
          }
         //  cout<<;
           if(i%2==0 && i%4 !=0){
                
               for(int i=1; i<m; i++){
                    cout<<".";
               }
               cout<<"#"<<endl;
          }
         
     }
}
int main(){
     solve();
     return 0;
}