#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    for (int i = 1; k > 0; --k) {
        cout << n - i << " ";
        --n;
    }
    return 0;
}
