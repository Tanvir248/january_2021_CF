#include<bits/stdc++.h>
using namespace std;
void solve(int n){
     int  a, b, ans;
     
     for(int i=0; i<n; i++){
          cin>>a>>b;
     //ans = a/b;
      //cout<<ans<<endl;
      if(a%b==0){
           ans =0;
           cout<<ans<<endl;
      }else{
           ans = a%b;
           ans = b-ans;
           cout<<ans<<endl;
     }
     }
 
}
int main(){
     int number;
     cin>>number;
     solve(number);
     return 0;
}
