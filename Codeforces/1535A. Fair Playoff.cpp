#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        vector<int> skill(4);
        for(int i=0; i<4; i++){
        cin >> skill[i];}

        int winner1 = max(skill[0], skill[1]);
        int winner2 = max(skill[2], skill[3]);


        vector<int> sortSkill = skill;
        sort(sortSkill.begin(), sortSkill.end(), greater<int>());   

        if((winner1 == sortSkill[0] || winner1 == sortSkill[1]) && 
           (winner2 == sortSkill[0] || winner2 == sortSkill[1])){
            cout << "YES" << endl;
        }

        else cout << "NO" << endl;
    } 

    return 0;
}