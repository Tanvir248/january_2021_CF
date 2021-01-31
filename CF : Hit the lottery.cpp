#include<bits/stdc++.h>
using namespace std;
using lln = long long int;
#define SIZE 100
void solve(){

  int n;
	scanf("%d", &n);
	int ans = 0;
	if (n >= 100) {
		int temp = n / 100;
		ans += temp;
		n -= (temp * 100);
	}
	if (n >= 20) {
		int temp = n / 20;
		ans += temp;
		n -= (temp * 20);
	}
	if (n >= 10) {
		int temp = n / 10;
		ans += temp;
		n -= (temp * 10);
	}
	if (n >= 5) {
		int temp = n / 5;
		ans += temp;
		n -= (temp * 5);
	}
	if (n >= 1) {
		int temp = n / 1;
		ans += temp;
		n -= (temp * 1);
	}
	printf("%d\n", ans);
	
     
}
    
int main(){
     solve();

     return 0;
}
/*#include<bits/stdc++.h>
using namespace std;
using lln = long long int;
#define SIZE 100
void solve(){

    int n,count100=0, count20=0, count10 =0, count5 =0, count1= 0;
     cin>>n;
 while(n!=0){
      cout<<n<<" ";
       while (n>=100)
       {
           n = n / 100;
           count100++;
       }
       while (n>=20 && n<100)
       {
            n = n/20;
            count20++;
       }
       while(n>=10 &&n<20){
             n = n/10;
             count10++;
       }
       while(n>=5 && n<10){
          n = n/5;            
           count5++;
            }
       while(n>=1 && n<5){
            n = n/1;
       count1++;
       }
       
       
       cout<<"N = "<<n<<endl;
     
}
    int count = count20+count100+count10+count5+count1;
     cout<<count<<endl;

}
int main(){
     solve();

     return 0;
}*/