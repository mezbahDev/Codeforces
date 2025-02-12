#include <iostream>
using namespace std;

int main() {
    int n;
    string a;
    int count=0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int sum = 0; 
        cin >> a;

        for (char c : a) {
            if (isdigit(c)) {
                sum += c - '0'; 
            }
        }
        if (sum == 2 || sum == 3) {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}