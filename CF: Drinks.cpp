#include<bits/stdc++.h>
using namespace std;
using lln = long long int;
#define SIZE 100
void solve(){
      typedef std::numeric_limits< double > dbl;
     vector<double>drink;
     double n, num, sum=0;
     cin>>n;
     for(double i=0; i<n; i++){
     cin>>num;
     drink.push_back(num);
     double ans = drink[i]/n;
     sum +=ans;
     }
   // cout.precision(dbl::);
    cout <<setprecision(12) << sum << endl;
}
int main(){
     solve();
    
     return 0;
}