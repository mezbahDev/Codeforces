#include <iostream>
#include <set>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    set<char> uniqueChar;

    for(char ch : s){
        uniqueChar.insert(ch);
    }
    
    if(uniqueChar.size() %2 == 0) cout << "CHAT WITH HER!";
    
    else cout << "IGNORE HIM!";

/*cout << (set<char> (s.begin(), s.end()).size()%2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!");*/
    
    return 0;
}
