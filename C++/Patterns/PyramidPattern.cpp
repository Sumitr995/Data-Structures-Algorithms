#include <iostream>
using namespace std;

//             1
//           1 2 1
//         1 2 3 2 1
//       1 2 3 4 3 2 1


int main() {
    int n=4; // Number of rows in the pyramid

    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) { 
            cout << "  ";
        }

        // Print increasing numbers
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        // Print decreasing numbers
        for (int j = i - 1; j >= 1; j--) {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}
