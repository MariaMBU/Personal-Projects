#include <iostream>
using namespace std;

int main() {
    int x, y, contor=0;
    cin >> x;
    y = x;
    while (y != 0) {
       if (y % x == 0) {
           ++contor;
       }
       cin >> y;
    }
   cout << contor;
   return 0;
}
