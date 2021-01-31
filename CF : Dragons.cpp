#include<bits/stdc++.h>
using namespace std;
void solve(){
     int n, num, kito, anskito=0, ansdragon=0;
     pair<int, int> dragon[100001];
     cin>>kito>>n;
     for(int i=0; i<n; i++){
     cin>>dragon[i].first>>dragon[i].second;
     }
     sort(dragon, dragon+n);
     for(int i=0; i<n; i++){
          if(kito<=dragon->first){
               anskito++;
               break;
          }else{
               kito = kito+dragon[i].second;
          }
     }if(anskito>0){
          cout<<"NO"<<endl;
     }else{
          cout<<"YES"<<endl;
     }
}
int main(){
     solve();
     return 0;
}
/*#include<bits/stdc++.h>
using namespace std;
void solve(){
     int n, num, kito, anskito=0, ansdragon=0;
     vector<int> dragon;
     cin>>kito>>n;
     for(int i=0; i<n*2; i++){
          cin>>num;
          dragon.push_back(num);
          if(dragon[0]>kito){
               cout<<"NO"<<endl;
         break; 
         }
           else{
                if(i%2==0)
                anskito = kito +dragon[i];
                else{
                     ansdragon += dragon[i];
                } 
                
           }
     }if(anskito>ansdragon){
          cout<<"YES"<<endl;
     }
}
int main(){
     solve();
     return 0;
}*/