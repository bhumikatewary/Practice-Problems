/* Your task is to count for k=1,2,…,n the number of ways two knights can be placed on a k×k chessboard so that they do not attack each other. */

// Total no. of non-attacking ways = Total no. of ways of placing the knights - Total no. of attacking positions

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    cout << 0 << endl;
    for (long long i = 2 ; i <= n ; i++) {
      cout << ((i * i) * (i * i - 1) / 2 - (4 * (i - 2) * (i - 1))) << endl;
    }

    return 0;
}
