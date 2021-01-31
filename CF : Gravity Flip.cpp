#include<bits/stdc++.h>
using namespace std;
using lln = long long int;
#define SIZE 100
void solve(){
     vector<int> flip;
     int n, num;
     cin>>n;
     for(int i=0; i<n; i++){
          cin>>num;
          flip.push_back(num);
     sort(flip.begin(), flip.end());
     }
     for(int i=0; i<n; i++){
     cout<<flip[i]<<" ";
     }
}
int main(){
     solve();
    
     return 0;
}