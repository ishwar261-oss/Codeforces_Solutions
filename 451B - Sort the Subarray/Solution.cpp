#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> sorted = a;

    sort(sorted.begin(), sorted.end());

    int l = 0;

    while (l < n && a[l] == sorted[l])
        l++;

    int r = n - 1;

    while (r >= 0 && a[r] == sorted[r])
        r--;

    if (l >= r) {

        cout << "yes\n";
        cout << "1 1";

    } else {

        reverse(a.begin() + l, a.begin() + r + 1);

        if (a == sorted) {
            cout << "yes\n";
            cout << l + 1 << " " << r + 1;
        }
        else {
            cout << "no";
        }
    }

    return 0;
}