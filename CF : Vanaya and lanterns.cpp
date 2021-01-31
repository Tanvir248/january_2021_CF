#include<bits/stdc++.h>
using namespace std;
void solve(int light, int length){
     double arr[1000],x;
     vector<double> len;
     for(int i=0; i<light; i++){
          cin>>arr[i];
          
     }sort(arr, arr+light);
     for(int i=0; i<light; i++){
       //   cout<<arr[i]<<" ";
          
          x = arr[i]- arr[i-1];
          len.push_back(x);
     }
     double y = max(arr[0], length-arr[light-1]);
     cout<<setprecision(10)<<max( y, *max_element(len.begin(), len.end())/2)<<endl;
}
int main(){
     int m, n;
     cin>>m>>n;
     solve(m, n);
}