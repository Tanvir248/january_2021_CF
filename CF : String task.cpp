#include <iostream>
#include <string>
using namespace std;

int main() {
string arr,arr2;
cin>>arr;

for(int i=0;i<arr.size();i++){
	if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'||arr[i]=='y'||arr[i]=='A'||arr[i]=='E'||arr[i]=='O'||arr[i]=='I'||arr[i]=='U'||arr[i]=='Y')
		continue;
	else
	{
		arr2+='.';
            arr2+=towlower(arr[i]);
	}
}
        cout<<arr2;
	return 0;
	}