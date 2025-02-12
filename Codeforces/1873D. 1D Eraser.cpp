#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;
        int operations = 0;

        for(int i = 0; i < n;){
            if(s[i] == 'B'){
                operations++;
                i+=k;
            }
            else{i++;}
        }
        cout << operations << endl;
    }
        return 0;
}