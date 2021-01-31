#include<iostream>
using namespace std;
int main(){
     int problems, minutes, sum=0, count=0;
     
     cin>>problems>>minutes;
     int ansmin = 240 - minutes;
    // cout<<ansmin<<endl;;
     for(int i= 1; i<= problems; i++){
          int ans = i*5;
          sum+=ans;
          if(sum > ansmin){
             //  cout<<problems-1<<endl;
               break;
          }
                    count++;

     }
     cout<<count<<endl;
}