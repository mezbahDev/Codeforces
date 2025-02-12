#include<iostream>
using namespace std;


bool isSuspicious(const string& s){
    for(size_t i = 0; i <s.length(); ++i){
        for(size_t j = i+1; j < s.length(); ++j){
            if(s[j] == s[i] && s[j-1]!=s[j]){
                return true;
            }
        }
    }
    return false;
}


int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        if(isSuspicious(s)) {
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    return 0;
}