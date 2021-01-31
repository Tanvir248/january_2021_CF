#include <iostream>
using namespace std;
void solve(int a){
     for (int i = 0; i < a; i++) {
        if (i % 2 == 0) {
            cout << "I hate ";
        } else {
            cout << "I love ";
        }
        if (i != a - 1) {
            cout << "that ";
        } else {
            cout << "it ";
        }
    }
    
}
int main() {
     int n;
    cin >> n;
    solve(n);
    return 0;
}