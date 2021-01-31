#include<bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using lln = long long int;
using ls = string;
using ch = char;
using lld = long double;
using lf = float;
using ll= int;
using ld = double;
#define SIZE 100
void solve(){ 
          vector<int>gift1;
          vector<int>gift2;
          lln n, num1,num2, count=0;
          cin>>n;
          for(int i=0; i<n; i++){
               cin>>num1;
               gift1.push_back(num1);
          }
           for(int i=0; i<n; i++){
                    cin>>num2;
               gift2.push_back(num2);
          }
          
          int x = *min_element(gift1.begin(), gift1.end());
		int y = *min_element(gift2.begin(), gift2.end());
          //cout<<x<<" "<<y<<endl;
          //cout<<x<<" "<<y<<endl;
           for(int i=0; i<n; i++){
                //cout<<gift1[0]<<" "<<gift2[0];
               count +=max( gift1[i]-x , gift2[i]-y);
                
               }
               cout<<count<<endl;
}
int main(){
     lln t;
     cin>>t;
     while (t--)
     {
          
     solve();
    
     }
     return 0;
}