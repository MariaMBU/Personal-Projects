#include <iostream>
using namespace std;

int main() {
    int n, rez;
    cin >> n;
    const int TEN = 10;
    for (int i = 1; i <= TEN; ++i) {
        rez = n * i;
        cout << rez << " ";
    }
    return 0;
}
