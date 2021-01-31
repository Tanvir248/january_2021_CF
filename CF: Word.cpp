#include<bits/stdc++.h>
using namespace std;
//vector<string> word;
void solveWOrd(int up, int low, string word){
    if(up>low){
    char ch;
        for(int i=0; i<word.size(); i++){
    
    ch =toupper(word[i]);
    cout<<ch;
    }
    }
    else if(low>up){
        char ch;
        for(int i=0; i<word.size(); i++){
        ch=tolower(word[i]);
        cout<<ch;
        }
    }
    else{
        char ch;
        for(int i=0; i<word.size(); i++){
        ch=tolower(word[i]);
        cout<<ch;
        }
    }

}
int main(){
    string word;
    cin>>word;
    int countUpper= 0, countLower =0;
    for (int i = 0; i < word.size(); i++)
    {
        if(isupper(word[i])){
            countUpper++;
        }else{
            countLower++;
        }
    }
    solveWOrd(countUpper, countLower, word);
    return 0;
}