#include <iostream>
using namespace std;

int main() {

    int M,N;
    cin >> M >> N;
    int rec = M*N;

    int domino = 2;

    cout << rec/domino << endl;
    return 0;
}