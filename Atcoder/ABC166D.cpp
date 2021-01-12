#include <iostream>
#include <math.h>
using namespace std;

int main() {
    long long X;
    cin >> X;
    for (long long A = -128; A <= 128; ++A) {
        for (long long B = -128; B <= 128; ++B) {
            if (A * A * A * A * A - B * B * B * B * B == X) {
                cout << A << " " << B << endl;
                return 0;
            }
        }
    }
}
//범위 노가다. 10^9=(10^3)^3=(2^10)^3, 2^30=(2^6)^5