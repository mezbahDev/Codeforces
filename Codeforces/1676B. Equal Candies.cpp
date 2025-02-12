#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> numbers(n);

        for(int i=0; i<n; i++){
            cin >> numbers[i];
        }

        int lowest = *min_element(numbers.begin(), numbers.end());

        int sum = 0;
        for(int num : numbers){
            sum += num - lowest;

        }
        cout << sum << endl;
    }
    
    return 0;
}