#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int count1=0, count2=0;

        for(int i = 0; i <n; i++){
            int weight;
            cin >> weight;
            if(weight == 1) count1++;
            else if(weight == 2) count2++;
        }
        
        if ((count1 % 2 == 0 && (count2 % 2 == 0 || count1 > 0)) || (count1 == 0 && count2 % 2 == 0)) 
        {cout << "YES" << endl;}
        else{cout << "NO" << endl;}
        }
    
    return 0;
}
