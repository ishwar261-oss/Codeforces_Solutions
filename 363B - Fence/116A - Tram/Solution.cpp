#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int n;
    cin >> n;

    int current = 0;
    int maximum = 0;

    while (n--) {

        int exit, enter;
        cin >> exit >> enter;

        current -= exit;
        current += enter;

        maximum = max(maximum, current);
    }

    cout << maximum;

    return 0;
}