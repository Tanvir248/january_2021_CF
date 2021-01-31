#include<bits/stdc++.h>
using namespace std;
void solve(string s1, string s2){
    if(s1== s2){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main(){
    string s;
    string x;
    getline(cin, s);
    getline(cin, x);

  reverse(s.begin(), s.end());
    solve(x, s);
    return 0;
}