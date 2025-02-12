#include<iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    while(n--){
        vector<int> nums(3);
        for(int i=0; i<3; i++){
            cin >> nums[i];
        }

        if (nums[0] == nums[1] + nums[2] || 
            nums[1] == nums[0] + nums[2] || 
            nums[2] == nums[0] + nums[1]) {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    
    
}