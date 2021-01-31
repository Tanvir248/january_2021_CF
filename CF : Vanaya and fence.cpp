#include<bits/stdc++.h>
using namespace std;
using lln = long long int;
#define SIZE 100
void solve(){
     int sum1=0, sum2=0;
     vector<int> wall;
     int n, num, hight;
     cin>>num>>hight;
     for(int i=0; i<num;i++){
          cin>>n;
          wall.push_back(n);
          if(wall[i]<=hight){
               sum1+=1;
          }else if(wall[i]>hight){
               sum2+=2;
          }
     }int ans = sum1+sum2;
     cout<<ans<<endl;
}
int main(){
     solve();

     return 0;
}