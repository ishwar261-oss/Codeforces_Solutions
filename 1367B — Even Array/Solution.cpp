#include <iostream>
#include <vector>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        vector<int> a(n);

        int wrongEven = 0;
        int wrongOdd = 0;

        for (int i = 0; i < n; i++) {

            cin >> a[i];

            if (i % 2 == 0 && a[i] % 2 != 0) {
                wrongEven++;
            }

            if (i % 2 == 1 && a[i] % 2 == 0) {
                wrongOdd++;
            }
        }

        if (wrongEven == wrongOdd)
            cout << wrongEven << '\n';
        else
            cout << -1 << '\n';
    }

    return 0;
}