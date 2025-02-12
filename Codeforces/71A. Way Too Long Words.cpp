#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n, i;
    cin >> n;
    string words[n];

    for(i=0; i<n; i++){cin >> words[i];}

    
    for (i=0; i<n; i++){
        string s = words[i];
        int length = s.length();

        if(length > 10)
                cout << s[0] <<(length-2)<<s[length - 1] << endl;
        else {
            cout << s << endl;
        }
    }
    return 0;
}