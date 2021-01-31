#include<bits/stdc++.h>
using namespace std;
void solve(){
     int n;
     
     cin>>n;
     for(int i=0; i<n; i++){
          vector<int> round;
          int number, ans;
          cin>>number;
          if(number%10 !=0){
               round.push_back(number%10);
               }
           ans = number%10;
          number -= ans;
          if(number%100 !=0){
               round.push_back(number%100);
               }
           ans = number%100;
          number -= ans;
          if(number%1000 !=0){
               round.push_back(number%1000);
               }
           ans = number%1000;
          number -= ans;
          if(number%10000 !=0){
               round.push_back(number%10000);
               }
           ans = number%10000;
          number -= ans;
          if(number >= 10000 && number%10000==0){
               round.push_back(number);
               }
          cout<<round.size()<<endl;
          for(int i=0; i<round.size(); i++){
               cout<<round[i]<<" ";
          }    
          cout<<endl;
     }
}
int main(){
     solve();
}