#include<iostream>
using namespace std;
int solve(long long int number){
     long long int even, odd, sumEven=0, sumOdd=0;
     if(number ==1) 
     return -1;
     else if(number %2 ==0){
          even=  number/2; 
          return even;   
     }else if(number%2 !=0){
          odd =  (number-1)/2-number; 
          return odd;
     }
}
int main(){
     long long int n;
     cin>>n;
     cout<<solve(n);
}/*#include<iostream>
using namespace std;
int main(){
     long long int number;
     cin>>number;
     if(number%2 ==0){
          cout<<number/2<<endl;
     }else{
          cout<<(number-1)/2-number<<endl;
     }
     return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int sum1=0, sum2=0;
    long long int n;
    cin>>n;
    for(long long int i=1; i<=n; i++){
        if(i%2==0){
            sum1+=i;
        }
        else{
            sum2+=i;
        }
    }
    cout<<sum1-sum2<<endl;
    return 0;
}*/