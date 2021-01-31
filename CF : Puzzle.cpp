#include<bits/stdc++.h>
using namespace std;
using lln = long long int;
#define SIZE 100
void solve(){
     vector<int> puzzle;
     int minimum = INFINITY;
     int n, m, num;
     cin>>n>> m;
     for(int i=0; i<n; i++){
          cin>>num;
          puzzle.push_back(num);
     
     }
     sort( puzzle.begin(),  puzzle.end());
     for(int i=n; i<=m; i++){
     minimum = min(minimum, abs(puzzle[i-1]-puzzle[i-n]));
     }
     cout<< minimum<<endl;
}
int main(){
     solve();
    
     return 0;
}
/*#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	int mini=100000;
	int arr[m];
	for(int i=0;i<m;i++){
		cin>>arr[i];
	}
sort(arr,arr+m);
	for(int i=n;i<=m;i++){
		mini=min(mini,abs(arr[i-1]-arr[i-n]));
	}
	cout<<mini;
 	return 0;
}*/