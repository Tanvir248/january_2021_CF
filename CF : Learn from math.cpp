#include<iostream>
using namespace std;
void solve(int n ){
     if(n %2==0){
          cout<<"4"<<" "<<n-4<<endl;
     }else{
          cout<<"9"<<" "<<n-9<<endl;
     }
}
int main(){
     int number;
     cin>>number;
     solve(number);
}
/*#include<bits/stdc++.h>
using namespace std;
using lln = long long int;
int prime(){
     
}
int main(){
lln number, count = 0;
     cin>>number;
     int find =0, prime=0; 
    
     for(int i= number/2; i>=4; i--){
          
          for(int j = number; j>=number/2; j--){
                if(number %2 ==0){
          cout<<number/2<<" "<<number/2<<endl;
          find =1;
     }
               if(i+j==number){
                    if( i%2 ==0 || j%2 ==0 ){ 
                            cout<<i-1<<" "<<j+1<<endl;
                            }
                           
                            find =1;
               }
               if(find){
                    break;
               }
          }
     }return 0;
}*/