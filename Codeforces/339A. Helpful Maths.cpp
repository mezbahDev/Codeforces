#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<int> numbers;

    for(char ch: s){
        if(isdigit(ch)) numbers.push_back(ch - '0');
    }

    sort(numbers.begin(), numbers.end());

    string result;

    for (int i = 0; i < numbers.size(); i++) {
    result += to_string(numbers[i]); 
    if (i != numbers.size() - 1) {
        result += "+";
    }
}
    cout << result <<endl;
    return 0;
}