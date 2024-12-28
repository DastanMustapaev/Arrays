#include <iostream>
#include <cmath>
using namespace std;

int main() {

    long long n;
    cin >> n;

    long long arr[n];
    for (long long i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long max = 0;
    long long min = 2 * (10 * 10 * 10 * 10 * 10 * 10);
    long long counter_min = 0;
    long long counter_max = 0;

    for (long long i = 0; i < n; i++) {
        if (arr[i] % 7 == 0 && arr[i] < min) {
            min = arr[i];
            counter_min++;
        }
        if (arr[i] > max && arr[i] % 10 >= 5) {
            max = arr[i];
            counter_max++;
        }
    }

    if (counter_min == 0) {
        min = -1;
    }
    if (counter_max == 0) {
        max = -1;
    }

    cout << min << endl;
    cout << max;

    return 0;
}