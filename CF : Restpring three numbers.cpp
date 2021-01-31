#include<bits/stdc++.h>
using namespace std;
using lln = long long int;
#define SIZE 100
void solve(){ 
          vector<int> arr;
          int number;
          for(int i=0; i<4; i++){
               cin>>number;
               arr.push_back(number);
          }sort(arr.begin(), arr.end());
          cout<<arr[3]- arr[0]<<" "<<arr[3]-arr[1]<<" "<<arr[3]-arr[2]<<endl;
}
int main(){
     solve();

     return 0;
}