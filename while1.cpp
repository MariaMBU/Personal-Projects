#include <iostream>
using namespace std;

//while problem

int main() {
    int n, x, planet_one;
    const int TEN = 10, NINE = 9;
    cin >> n;
    int n_copy = n, planets;
    while (n > 0) {
        planet_one = n % TEN;
        n /= TEN;
    }
    planets = 0;
    while (n_copy > NINE) {
        x = n_copy % TEN;
        if (x % planet_one == 0) {
            ++planets;
        }
        n_copy /= TEN;
    }
    cout << planets;
    return 0;
}
