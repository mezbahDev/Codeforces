#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;

    int anton=0, danik=0;

    for(char ch:s){
        if(ch == 'A') anton++;
        else danik++;
    }

    if(anton > danik) cout << "Anton";
    else if(danik > anton) cout << "Danik";
    else cout << "Friendship";

    return 0;
}