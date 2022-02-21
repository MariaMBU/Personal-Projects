#include <iostream>
using namespace std;

int main() {
    int n, c;
    cin >> n >> c;
    int n_copy = n, cifre_n = 0, i = 1;
    const int TEN = 10;
    while (n > 0) {
        ++cifre_n;
        n /= TEN;
        while (i <= cifre_n) {
            c *= TEN;
            ++i;
        }
    }
    int rez = c + n_copy;
    cout << rez << " " << rez * 2;
    return 0;
}
