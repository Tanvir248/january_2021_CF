#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void unique_Number(){
  int x;
  cin>>x;
  vector<int> ans;
  int sum =0, last =9;
  while (sum<x && last >6){
    ans.push_back(min(x-sum, last));
    sum += last;
    last--;
  }
  if(sum<x)
  cout<<-1<<endl;
  else{
    reverse(ans.begin(), ans.end());
    for(int i : ans)
    cout<<i;
  }
  cout<<endl;
  
}

int main(){
  int t;
cin>>t;
while (t--)
{
  unique_Number();
}
return 0;
}