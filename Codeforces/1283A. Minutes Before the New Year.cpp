#include <iostream>
using namespace std;

int main(){
    int t, h, m;
    cin >> t;

    while(t--){
        cin >> h >> m;
        int  minutesInDay = 1440;
        int minutesPassed = (h*60)+m;

        int minutesRemaining = minutesInDay - minutesPassed;
      
        cout << minutesRemaining << endl;
    }
    return 0;
}