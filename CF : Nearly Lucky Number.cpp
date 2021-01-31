#include<bits/stdc++.h>
using namespace std;
void solve(){

}
int main(){
    long long int num;
    int remainder, remainder2,remainder3, count=0, count1=0;
    cin>>num;
    while (num!=0)
    {
        remainder = num%10;
       
        if(remainder == 4 || remainder == 7){
            count++;
        }
       
        num = num/10;
        
    }
    if(count==7 || count ==4){
        cout<<"YES"<<endl;
    } else{
            cout<<"NO"<<endl;
            
        }
    
    return 0;
}