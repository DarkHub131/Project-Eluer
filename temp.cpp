#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        // Calculate the sum of numbers divisible by 3
        long long sum = 0;
        int num3 = (n - 1) / 3;  // Number of multiples of 3 less than n
        sum += 3LL * num3 * (num3 + 1) / 2;

        // Calculate the sum of numbers divisible by 5
        int num5 = (n - 1) / 5;  // Number of multiples of 5 less than n
        sum += 5LL * num5 * (num5 + 1) / 2;

        // Subtract the sum of numbers divisible by 15 to avoid double counting
        int num15 = (n - 1) / 15;  // Number of multiples of 15 less than n
        sum -= 15LL * num15 * (num15 + 1) / 2;

        cout << sum << endl;
    }

    return 0;
}