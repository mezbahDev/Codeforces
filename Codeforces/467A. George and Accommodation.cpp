#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count = 0;

    while(n--){
        int p, q;
        cin >> p >> q;

        int a = q-p;
        if(a>=2) count++;
    }
    cout << count << endl;
}