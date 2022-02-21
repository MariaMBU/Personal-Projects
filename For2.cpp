#include <iostream>
using namespace std;

int main(){
    int n,a,b,c;
    cin >> n >> a >> b >> c;
    for (int i = 1; n > 0; ++i) {
        if (i%a && i%b && i%c) {
            cout << i << " ";
            --n;
        }
    }
    return 0;
}
