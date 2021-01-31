#include<bits/stdc++.h>
using namespace std;
void solve(int n){
     int exit[1001], enter[1001];
     int sum1=0; int sum2=0; int ans[1001];
    // int max = ans[0];
     for(int i=0; i<n; i++){
          cin>>exit[i]>>enter[i];
         sum2+=enter[i];
          sum1+=exit[i];
          
          ans[i] = sum2-sum1;
       //   cout<<"ans[i is--->]: "<<ans[i]<<endl;
          if(ans[i] > ans[0])
          ans[0] = ans[i];
     //cout<<"Max value is--->"<<ans[0]<<endl;
     }
    // ans = ((sum1+sum2)/2)-n;
     
     
     cout<<ans[0]<<endl;
     }
int main(){
     int number;
     
     cin>>number;

     solve(number);
     return 0;
}
//Another way to find the big array I know so I also keep this under the extual code. But I think it's very
//interesting to find the big array by logic.. I am be very proud for this flollowing problem.. Thanks Allah
/*#include<bits/stdc++.h>
using namespace std;
void solve(int n){
     int exit[1001], enter[1001];
     int sum1=0; int sum2=0; int ans[1001];
    // int max = ans[0];
     for(int i=0; i<n; i++){
          cin>>exit[i]>>enter[i];
         sum2+=enter[i];
          sum1+=exit[i];
          
          ans[i] = sum2-sum1;
      //  //   cout<<"ans[i is--->]: "<<ans[i]<<endl;
      //     if(ans[i] > ans[0])
      //     ans[0] = ans[i];
     //cout<<"Max value is--->"<<ans[0]<<endl;
     }
    // ans = ((sum1+sum2)/2)-n;
     
     
     cout<<*max_element(ans, ans+n)<<endl;
     }
int main(){
     int number;
     
     cin>>number;

     solve(number);
     return 0;
}
*/
