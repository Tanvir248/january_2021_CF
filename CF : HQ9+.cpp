
#include<bits/stdc++.h>
using namespace std;
void solve(char a[4], string hq){
    int flag =0;
 for(int i=0; i<hq.size(); i++){
      if(hq[i]>=33&&hq[i]<=126){
        if(hq[i]== a[0] || hq[i]==a[1] || hq[i]==a[2]){
            flag =1;   
        }
       }

    }  if(flag){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    
            
}
int main(){
    string s;
    char a[4];
     a[0]='H';
     a[1]='Q';
     a[2]='9';
     a[3]= '+';
    cin>>s;
   solve(a, s);
    return 0;
}