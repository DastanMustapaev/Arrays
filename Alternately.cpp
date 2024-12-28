#include <iostream>
using namespace std;

int main() {

    long long n;
    cin >> n;

    long long A[n], B[n], C[n];

    for (long long i = 0; i < n; i++) {
        cin >> A[i];
    }

    for (long long i = 0; i < n; i++) {
        cin >> B[i];
    }

    for (long long i = 0; i < n; i++) {
        if ((i + 1) % 2 != 0) {
            C[i] = A[i];
        } else {
            C[i] = B[i];
        }
    }

    for (long long i = 0; i < n; i++) {
        cout << C[i] << (i == n - 1 ? '\n' : ' ');
    }

    return 0;
}
