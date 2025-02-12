#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;

    string target = "Timur";
    sort(target.begin(), target.end());

    while(t--){
        int n;
        string s;
        cin >> n >>s;

        sort(s.begin(), s.end());

        if(s == target) cout << "YES" << endl;
        else cout << "NO" << endl;
        }
    return 0;
}