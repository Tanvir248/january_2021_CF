#include<bits/stdc++.h>
using namespace std;
void solve(){
     vector<int> solve;
     int mx =0, min= 101, countmx, countmin;
     int n, number;
     cin>>n;
     for(int i=0; i<n; i++){
     cin>>number;
     solve.push_back(number);
     if(solve[i]>mx){
          mx= solve[i];
          countmx =i;
     }else if(solve[i]<=min){
          min = solve[i];
          countmin = i;
     }
     }
     if(countmx>countmin){
          countmin++;
     }
     
     cout<<(countmx+(n-1))-countmin<<endl;

}
int main(){
     solve();
     return 0;
}