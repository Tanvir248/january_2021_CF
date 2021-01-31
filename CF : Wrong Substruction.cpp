#include<bits/stdc++.h>
using namespace std;
void solve(int n){
     int number;
     cin>>number;
     for(int i=0; i<number; i++){
     if(n%10==0){
     n /=10;
     }
     else
          n--;
     }
     cout<<n<<endl;
     }
int main(){
     int number;
     cin>>number;
     solve(number);
     return 0;
}