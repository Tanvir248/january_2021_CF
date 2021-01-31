#include<bits/stdc++.h>
using namespace std;
using lln = long long int;
#define SIZE 100
void solve(){ 
     vector<int> police;
     lln n , num, sum =0, count =0, sum2=0;
     cin>>n;
     for (int i = 0; i < n; i++)
     {
           cin>>num;
           police.push_back( num);
     }
     for(int i =0; i<n; i++){
          if(police[i]>0){
               sum += police[i];
               //cout<<"Sum is: "<<sum<<"  s end"<<endl;
          }else if(sum>0){
               sum--;
//cout<<"Sum -- is: "<<sum<<endl;
          }else{
               count++;
               //cout<<"Cunt is: "<<count<<endl;
          }
     }cout<<count<<endl;
         
}
int main(){
     
     solve();

     return 0;
}