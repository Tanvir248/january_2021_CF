#include<bits/stdc++.h>
using namespace std;
using lln = long long int;
#define SIZE 100
void solve(){
       vector <int > solve;
       int n, number;
       int count1=0, count2=0;
       cin>>n;
       for(int i=0; i<n; i++){
            cin>>number;
            solve.push_back(number);

            if(solve[i]==1){
                 count1++;
            }
            else if(solve[i]==2){
                    count2++;
            }
       }
     if ((count1 + 2 * count2) % 2 != 0) {
    cout << "NO\n";
  } else {
    int sum = (count1 + 2 * count2) / 2;
    if (sum % 2 == 0 || (sum % 2 == 1 && count1 != 0)) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
}
}
int main(){
     int t;
     cin>>t;
     while (t--)
     {
          solve();
     }
     return 0;
}
/*#include<bits/stdc++.h>
using namespace std;
using lln = long long int;
#define SIZE 100
void solve(){
       vector <int > solve;
       lln n, number;
       int count1=0, count2=0;
       cin>>n;
       for(int i=0; i<n; i++){
            cin>>number;
            solve.push_back(number);

            if(i<n/2){
                 count1+=solve[i];
            }
            else if(i>=n/2){
                    count2+=solve[i];
            }
       }
      // cout<<"C!"<<count1<<endl;
     //cout<<"C2"<<count2<<endl;
       if(count1==count2 ){
            cout<<"YES"<<endl;
       }
       else{
            cout<<"NO"<<endl;
       }
}
int main(){
     int t;
     cin>>t;
     while (t--)
     {
          solve();
     }
     return 0;
}*/
