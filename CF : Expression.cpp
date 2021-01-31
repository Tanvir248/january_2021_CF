#include<bits/stdc++.h>
using namespace std;
int main(){
    int number1, number2, number3;
    cin>>number1>>number2>>number3;
    int ans = number1+number2+number3;
    ans = max(ans, (number1+number2)*number3);
    ans = max(ans, number1*(number2+number3));
    //ans = max(ans, number1*(number2+number3));
    ans = max(ans, number1*number2*number3);
    cout<<ans<<endl;
    return 0;
}

/*#include<iostream>
using namespace std;
int main(){
     long long int a, b, c;
     cin>>a>>b>>c;
     if( a==1 && b<c){
          cout<<(a+b)*c<<endl;
     }
     else if( a==1 && b>c){
          cout<<(a+c)*b<<endl;
     }
     else if( b==1 && a<c){
          cout<<(a+b)*c<<endl;
     }
     else if( b==1 && a>c){
          cout<<(b+c)*a<<endl;
     }else if( c==1 && b<a){
          cout<<(c+b)*a<<endl;
     }
     else if( c==1 && b>a){
          cout<<(a+c)*b<<endl;
     }else if(a ==1 && b==1&& c==1){
          cout<<a+b+c<<endl;
     }
     else
     cout<<a*b*c<<endl;
     return 0;
}*/
