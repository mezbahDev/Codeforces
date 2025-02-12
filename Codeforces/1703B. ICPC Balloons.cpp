#include <iostream>
using namespace std;

int main(){
    int a; 
    cin >> a;
    while(a--){
        int n; string s;
        cin >> n >> s;
        int ballons = 0;

        //26 alphabet are not solved yet
        // boolean used only true or false
        bool solved[26] = {false};

        for(char ch : s){
            int index = ch - 'A';

// if alphabets are solved
            if(!solved[index]){
                ballons += 2;
                solved[index] = true;
            }
            else{
                ballons += 1;
            }
        }
        cout << ballons << endl;
    }
    return 0;
}