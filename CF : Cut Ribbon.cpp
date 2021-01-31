#include<bits/stdc++.h>
using namespace std;
void solve(){
     int n, a, b ,c;
     cin>>n>>a>>b>>c;
     int dp[n+1];
     dp[0]= 0;
     int x, y, z;
     for(int i = 1; i<=n ;i++){
          x = INT_MIN, y = INT_MIN, z = INT_MIN;
          if(i>=a)
               x = dp[i-a];
               if(i>=b)
                    y= dp[i-b];
                    if(i>=c)
                         z = dp[i-c];
          dp[i]= 1+max(z, max(x, y));
     }
     cout<<dp[n]<<endl;
}
int main(){
     solve();
     return 0;
}
/*#include<bits/stdc++.h>
using namespace std;
void solve(){
     int count=0, x;
    int n, arr[3], ans=0;
    cin>>n;
    int mini= arr[3];
    for(int i=0; i<3; i++){
         cin>>arr[i];
           ans+=arr[i];

    }cout<<ans<<endl;
     for(int i =0; i<3 ; i++){
          
          for(int j = 1; j<3; j++){
               if(arr[i]+ arr[j]==n && (arr[i]== arr[i+1])+ arr[j] != n){
                 count++;
               }
               
          }

     } int ans1= count;
    // cout<<ans<<endl;
   if(ans == n){
        cout<<1<<endl;
   }
    else if(ans == 3*n){
          cout<<1<<endl;
     }
     else if(ans < n){
          sort(arr, arr+3);
          cout<<n/arr[0]<<endl;
     }
  else if(ans1 == 3 && ans> n){
                    
      cout<<count-1<<endl;
      }else
               cout<<count<<endl;
    }

int main(){
     solve();
     return 0;
}*/