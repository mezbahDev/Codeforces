#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    while(n--){
        int a, b;
        cin >> a >> b;

        int sum = b-(a%b);
        if(sum == b) {cout << 0 << endl;}
        else cout << sum << endl;
    }
}
