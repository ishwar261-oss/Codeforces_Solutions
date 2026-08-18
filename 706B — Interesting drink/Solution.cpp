#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> prices(n);

    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    sort(prices.begin(), prices.end());

    int q;
    cin >> q;

    while (q--) {
        int x;
        cin >> x;

        int left = 0;
        int right = n - 1;
        int ans = 0;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (prices[mid] <= x) {
                ans = mid + 1;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}