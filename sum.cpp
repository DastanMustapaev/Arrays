#include <iostream>
using namespace std;
int main() {

    long long n;
    cin >> n;
    long long arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    long long sum = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 != 0 ) {
            sum += arr[i];
        }
    }
    cout << sum << endl;

    return 0;
}
