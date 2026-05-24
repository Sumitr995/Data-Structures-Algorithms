#include <iostream>
using namespace std; 

 // Inverted Triangle Pattern

//  1 2 3 4
//    1 2 3
//      1 2
//        1

int main(){
    int n = 4;
    for (int i = n; i > 0; i--){      // outer loop
        for (int j = 0; j < n - i; j++){  // inner loop - j < n - i (core logic)
            cout << "  ";
        };
        for (int k = 1; k <= i; k++){
            cout << k << " ";
        };
        cout << endl;
    };

    return 0;
};