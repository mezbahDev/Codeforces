#include<iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        int counta=0, countb=0;

        for(char ch : s){
            if(ch == 'A') counta++;

            else countb++;
        }
        
        if(counta>countb)   cout <<'A'<< endl;
        else cout << 'B'<< endl;
        
    }
    return 0;
}