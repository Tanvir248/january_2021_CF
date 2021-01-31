#include<bits/stdc++.h>
using namespace std;
using lln = long long int;
using ld = long double;
#define SIZE 100
void solve(){ 
        lln ans, n , m , nRide_costs, mRide_costs;
        lln x, y, z;
        cin>>n>>m>>nRide_costs>>mRide_costs;
     ans = n/m;
    
     y = n* nRide_costs;
     z = ans* mRide_costs;
     if(m* nRide_costs <= mRide_costs){
          cout<<n*nRide_costs<<endl;
     }       
     else
      cout << (ans) * mRide_costs + min((n%m) * nRide_costs, mRide_costs) << "\n";

}
int main(){
     
     solve();

     return 0;
}
/*#include<bits/stdc++.h>
using namespace std;
using lln = long long int;
using ld = long double;
#define SIZE 100
void solve(){ 
        ld ans, n , m , nRide_costs, mRide_costs;
        lln x, y, z;
        cin>>n>>m>>nRide_costs>>mRide_costs;
     ans = n/m;// cout<<ans<<endl;
     x = n/m;//cout<<x<<endl;
     y = n* nRide_costs;
     z = ans* mRide_costs; cout<<z<<endl;
     if(ans>x)
     {
          z+=1;
     }//cout<<z<<endl;
     if(z<y){
          cout<<z<<endl;
     }else{
          cout<<y<<endl;
     }
}
int main(){
     
     solve();

     return 0;
}*/