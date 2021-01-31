#include<bits/stdc++.h>
using namespace std;
void solve(int aCount, int dCount){
     if(aCount>dCount){
        cout<<"Anton"<<endl;
    }
    else if(aCount<dCount){
        cout<<"Danik"<<endl;
    }
    else if(aCount== dCount){
        cout<<"Friendship"<<endl;
    }
}
int main(){
    char s[100001];
    int t, aCount=0, dCount =0;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>s[i];
        if(s[i]=='A'){
            aCount++;
        }
        else if(s[i]=='D'){
            dCount++;
        }
    }
    solve(aCount, dCount);
    
    return 0;
}