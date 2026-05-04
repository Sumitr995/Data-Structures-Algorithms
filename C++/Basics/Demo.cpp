// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
//     int n;
//     int m;
//     cin >> n; 
//     cout << "This is the value of n: " << n << endl; cout << "this is the value of m : " << m << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

main(){
    int n = 7;
    bool isPrime = true;
    for (int i = 2; i <= n - 1; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }
    if(isPrime == true){
        cout << n << " is Prime";
    }else{
        cout << n << " is not Prime";
    }
    return 0;
}