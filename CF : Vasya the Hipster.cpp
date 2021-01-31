#include<bits/stdc++.h>
using namespace std;
int main(){
     int m, n, x, y;
     int a;
     int b;
     cin>>m>>n;
     a=m;
     b= n;
    if(a> b){
         cout<<b<<" "<<(a-b)/2<<endl;
    }else{
         cout<<a<<" "<<(b- a)/2<<endl;
    }
     
}
/*#include<bits/stdc++.h>
using namespace std;
int main(){
     int m, n, x, y;
     vector<int >a;
     vector<int >b;
     for(int i=0; i<2; i++){
     cin>>m>>n;
     a.push_back(m);
     b.push_back(n);
    if(a[i]> b[i]){
         cout<<b[i]<<" "<<(a[i]-b[i])/2<<endl;
    }else{
         cout<<a[i]<<" "<<(b[i]- a[i])/2<<endl;
    }
     }
}*/