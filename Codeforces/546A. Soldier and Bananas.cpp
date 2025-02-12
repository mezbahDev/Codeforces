#include <iostream>
using namespace std;

int main(){
    int k, w, n;
    cin >> k >> n >> w;
    long long sum = 0;

    for(int i=1; i<=w; i++) {
        sum += (k*i);
    }
    long long borrow =(sum-n);
    if(borrow>0) cout << borrow<< endl;
    else cout << 0 << endl;
    return 0;
}