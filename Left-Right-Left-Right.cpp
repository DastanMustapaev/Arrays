#include <iostream>
using namespace std;

int main() {

    long long n;
    cin >> n;

    long long A[n];

    for (long long i = 0; i < n; i++) {
        cin >> A[i];
    }

    long long left = 0, right = n - 1;

    while (left <= right) {
        cout << A[left] << " ";
        if (left != right) {
            cout << A[right] << " ";
        }
        left++;
        right--;
    }

    return 0;
}
