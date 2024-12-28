#include <iostream>
using namespace std;
int main() {

    long long n;
    cin>>n;

    long long arr1[n], arr2[n];
    for(long long i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    for(long long i = 0; i < n; i++) {
        cin >> arr2[i];
    }
    long long result = 0;

    for(long long i = 0 ; i < n; i++ ) {
        long long sum = 0;
        sum = arr1[i] * arr2[i];
        result += sum;
    }

    cout << result << endl;

    return 0;
}