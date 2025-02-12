#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;



bool Equal(const string s){
    int n = s.length();
    if(n%2 != 0){
        return false;
    }

    int mid = n/2;
    return s.substr(0,mid)==s.substr(mid, mid);
}

int main() {
    int t;
    cin >> t; 

    while (t--) {
        string s ;
        cin >> s; 

       if (Equal(s)){
                cout << "YES"<< endl;
            }
            else{
                cout << "NO" << endl;
            }        
    }

    return 0;
}
