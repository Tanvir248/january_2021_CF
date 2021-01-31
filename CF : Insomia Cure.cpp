#include<iostream>
using namespace std;
void solve(int k,int l, int m,int n ,int d){
     int count = d;
     if(k==11|| l==1||m==1||n==1)
                cout<<d<<endl;
     else {
        for(int i = 1; i <= d; i++)
        {
            if((i%k != 0) && (i%l != 0) && (i%m != 0) && (i%n != 0))
                count--;
        }
        cout << count << endl;
    }
}

int main(){
     int k,l, m,n ,d;
     cin>>k>>l>>m>>n>>d;
     solve(k,l, m,n ,d);
    return 0;
}