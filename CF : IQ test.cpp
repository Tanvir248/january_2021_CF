#include<bits/stdc++.h>
using namespace std;
void solve(int n){
    int arr[200];
    int  even, odd, countOdd=0, countEven=0;
    
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    if(arr[i]%2==0){
        countEven++;
        even =i;
    }
    else{
        countOdd++;
        odd=i;
    }
    }
    if(countOdd==1)
    {
        cout<<odd<<endl;
    }else if(countEven==1){
        cout<<even<<endl;
    }
   // cout<<"Eve"<<countEven<<endl;
    //cout<<"Odd"<<countOdd<<endl;
}
int main(){
    int number;
    cin>>number;
    solve(number);
    return 0;
}