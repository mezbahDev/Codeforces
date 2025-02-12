#include <iostream>
#include <set>
using namespace std;

int main(){
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

   set<int> color={s1, s2, s3, s4};

   int need = 4 - color.size();

   cout << need << endl;
}