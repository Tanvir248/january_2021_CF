#include<bits/stdc++.h>
using lln = long long int;
using namespace std;
void solve(){
    int n;
    cin>>n;
    lln sum =0;
    vector<int> ans(n);
    for(int &x: ans){
        cin>>x;
    }
    sort(ans.rbegin(), ans.rend());
    for(int i=0; i<n; i++){
        if(i%2==0){
            if(ans[i]%2==0){
                sum+=ans[i];
          }
            }else {
              if(ans[i]%2 ==1){
                sum -=ans[i];
                }
        }
    }
    if(sum==0){
        cout<<"Tie"<<endl;
    }else if(sum>0){
        cout<<"Alice"<<endl;
    }else if(sum<0){
        cout<<"Bob"<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}