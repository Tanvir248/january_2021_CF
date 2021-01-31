#include<bits/stdc++.h>
using namespace std;
int main(){
    double m, n, ans;
    int ans1, sum =0;
    int t;
    cin>>t>>m;
    while (t--)
    {
        cin>>n;
        ans = n/m;
        ans1= n/m;
        if(ans>ans1){
            ans = ans+1;
        }
        sum = sum+ans;
    }
    cout<<sum<<endl;
    
}