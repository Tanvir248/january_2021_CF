#include<bits/stdc++.h>
using namespace std;
using lln = long long int;
#define SIZE 100
void solve(){
     int n, m;
          cin>>n>>m;
     if(n>m){
          swap(n, m);
     }
     if (n % 2 == 0) {
		cout << "Malvika" << endl;
	} else {
		cout << "Akshat" << endl;
	}
	
}
int main(){
     solve();

     return 0;
}