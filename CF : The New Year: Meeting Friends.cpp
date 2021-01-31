#include<bits/stdc++.h>
using namespace std;
using lln = long long int;
#define SIZE 100
void solve(){ 
     vector<int > arr;
     int number, n=3;
     for(int i=0; i<n; i++){
          cin>>number;
          arr.push_back(number);
          sort(arr.begin(), arr.end());
     }             
     // for(int i=0; i<n; i++){
     //    cout<<arr[i]<<" ";
     // }    
     cout<<(arr[2]- arr[1])+(arr[1]- arr[0])<<endl;
}
int main(){
     
     solve();

     return 0;
}