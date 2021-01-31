#include<bits/stdc++.h>
using namespace std;
using lln = long long int;
using ls = string;
using ch = char;
using lld = long double;
using lf = float;
using ll= int;
using ld = double;
#define SIZE 100
void solve(){ 
              vector<int> holidays;
              ll n, sum=0;
              lln num;
              cin>>n;
              for(int i =0; i<n; i++){
                   cin>>num;
                   holidays.push_back(num);
                   
              } sort(holidays.begin(), holidays.end());
              
              for(int i=0; i<n ; i++){
                   sum +=(holidays[n-1] - holidays[i]);
              }
              cout<<sum<<endl;
   }
int main(){
     
     solve();

     return 0;
}
/*#include<bits/stdc++.h>
using namespace std;
using lln = long long int;
using ls = string;
using ch = char;
using lld = long double;
using lf = float;
using ll= int;
using ld = double;
#define SIZE 100
void solve(){ 
              vector<int> holidays;
              ll n, sum=0;
              lln num;
              cin>>n;
              for(int i =0; i<n; i++){
                   cin>>num;
                   holidays.push_back(num);

              } /*sort(holidays.begin(), holidays.end());
              
              for(int i=0; i<n ; i++){
                   sum +=(holidays[n-1] - holidays[i]);
              }
              cout<<sum<<endl;*/
              //cout<<holidays[n-1]<<endl;
    */          
    /*          ll x =0 ,tag, max = holidays[0];
              for(int i=0; i<n; i++){
                   if(holidays[i]>max){
                        max = holidays[i];
                     tag = i;
                   }
              }for(int i=0; i<n; i++){
                   if(holidays[i]<max){
                    sum +=max - holidays[i];    
                   }
                   //cout<<x<<endl;
                   
                  // cout<<sum;
              }cout<<sum<<endl;
}
int main(){
     
     solve();

     return 0;
}*/