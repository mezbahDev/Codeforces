#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;

    int upperLetter=0, lowerLetter=0;

    for(char ch:s){
        if(ch >= 'A' && ch <= 'Z') upperLetter++;
        if(ch >= 'a' && ch <= 'z') lowerLetter++;
    }

    if(upperLetter > lowerLetter){
        transform(s.begin(), s.end(), s.begin(), ::toupper);}

    else {transform(s.begin(), s.end(), s.begin(), ::tolower);};
    
    cout << s << endl;

}