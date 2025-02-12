#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool Hard=false;

    while(n--) {
        int opinion;
        cin >> opinion;

        if(opinion == 1) Hard = true;
    }

    if(Hard) cout << "HARD" << endl;
    else cout << "EASY" << endl;
}