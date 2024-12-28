#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long arr[n];
    for (long long i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long max_even = LLONG_MIN;

    for (long long i = 0; i < n; i++) {
        if (arr[i] % 2 == 0 && arr[i] > max_even) {
            max_even = arr[i];
        }
    }

    cout << max_even << endl;

    return 0;
}
