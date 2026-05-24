#include <iostream>
using namespace std;

int main(){
    int n = 4;
    for (int i = 0; i < n; i++){      // outer loop
        for (int j = 0; j < i+1; j++){  // inner loop - j < i+1 (core logic)
            cout << "* ";
        };
        cout << endl;
    };

    return 0;
};