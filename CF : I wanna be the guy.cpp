#include <bits/stdc++.h>
using namespace std;
void solve(int n){
       int arr[250];
    int  p , q;
    cin  >> p;
    int count = 0;

    for(int i =  0 ; i < p ; i++){
        cin >> arr[i];
    }
    cin >> q;
    for(int i = p ; i < p + q ; i++){
        cin >> arr[i];
    }

    sort(arr , arr+(p+q));

    for(int i = 0 ; i < p+q ; i++){
        if(arr[i] != arr[i+1]){
            count++;
        }
    }

    if(n == (count)){
        cout << "I become the guy." <<endl;
    }else{
        cout << "Oh, my keyboard!" << endl;
    }
}
int main()
{
  int number;
  cin>>number;
  solve(number);

    return 0;
    }
/*#include<bits/stdc++.h>
using namespace std;
void solve(){
     int arr[101], arr2[102];
     int n,p, q;
     cin>>n>>p;
     for(int i=0; i<p; i++){
          cin>>arr[i];
     }
     cin>>q;
     for(int j=0; j<q; j++){
          cin>>arr2[j];
     }
     cout<<"Max of arr[i]: "<<*max_element(arr, arr+p)<<endl;
     cout<<"Max of arr2[j]: "<<*max_element(arr2, arr2+q)<<endl;
     if( *max_element(arr2, arr2+q)>=n ||*max_element(arr, arr+p)>=n){
          cout<<"I become the guy."<<endl;
     }else{
          cout<<"Oh, my keyboard!"<<endl;
     }
}
int main(){
 solve();
     
}
#include<bits/stdc++.h>
using namespace std;
void solve(){
     int arr[101], arr2[102];
     int n, count1=0, count=0;
     cin>>n;
     int i=1, j=1;
     while (i<10)
     {
     cin>>arr[i];
     count++;
     if (getchar())
     {
          break;
     }
     
     }
     while (j<10)
     {
          cin>>arr2[j];
          
          count1++;
          if (getchar())
     {
          break;
     }
     
     }
     
     cout<<"Max of arr[i]: "<<*max_element(arr, arr+count)<<endl;
     cout<<"Max of arr2[j]: "<<*max_element(arr2, arr2+count1-1)<<endl;
     if( *max_element(arr2, arr2+count1-1)>=n ||*max_element(arr, arr+count)>=n){
          cout<<"I become the guy."<<endl;
     }else{
          cout<<"Oh, my keyboard!"<<endl;
     }
}
int main(){
 solve();
     
}*/