#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> points(n);
    
    for(int i=0; i<n; i++) cin >> points[i];

    int max_points = points[0]; 
    int count=0;
    int min_points = points[0];

    for(int i=1; i<n; i++){
        if(points[i]>max_points){
            count++;
            max_points = points[i];
        }
        else if(points[i]<min_points){
            count++;
            min_points = points[i];
            }
}
    cout << count << endl;
    return 0;
}
