#include<bits/stdc++.h>
using namespace std;

int main(){
 vector<int> twin;
 int n, number;
 int sum1 =0;
 int count =0, ans =0;
 cin>>n;
 for(int i=0; i<n; i++){
     cin>>number;
     twin.push_back(number);
     sum1 += number;
 }
 sum1 = sum1/2;
 sort(twin.begin(), twin.end());
    for(int i=n-1; i>=0; i--){
        ans+=twin[i];
    count++;
     if(ans>sum1)
     break;
    }
    cout<<count<<endl;
    return 0;
}