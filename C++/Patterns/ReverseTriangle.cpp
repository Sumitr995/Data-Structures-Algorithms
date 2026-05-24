#include <iostream>
using namespace std;

int main(){
    int n = 4;
    for (int i = n; i > 0; i--){      // outer loop
        for (int j = 0; j < i; j++){  // inner loop - j < i (core logic)
            cout << i << " ";
        };
        cout << endl;
    };

    return 0;
};