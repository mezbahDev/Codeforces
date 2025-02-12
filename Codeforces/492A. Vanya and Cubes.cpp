#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int floor = 0;
    int cubes = 0;
    int level = 1;

    while(true){
        int UsedCubes = (level * (level + 1)) /2;
        if(cubes+UsedCubes > n) break;

        cubes +=UsedCubes;
        floor++;
        level++;
    }
    cout << floor << endl;
    return 0;

}