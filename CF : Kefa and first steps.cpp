#include<bits/stdc++.h>
using namespace std;
void solve(){
     vector<int> solve;
     int mx =1, count =0;
     int n, number;
     cin>>n;
     for(int i=0; i<n; i++){
     cin>>number;
     solve.push_back(number);
     if(solve[i]>=solve[i-1]){
          count++;
          mx = max(mx, count);
     }else{
          count =1;
     }
     }
     cout<<mx<<endl;
}
int main(){
     solve();
     return 0;
}