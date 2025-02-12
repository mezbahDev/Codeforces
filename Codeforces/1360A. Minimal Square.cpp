#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int a, b;
        cin >> a >> b;

        int side1 = max(a+a, max(b, b));
        int side2 = max(b+b, max(a, b));

        if(side1 > side2){cout << side2*side2 << endl;}
        else{cout << side1*side1 << endl;}
    }
    return 0;
}