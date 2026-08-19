#include <iostream>
using namespace std;

int main() {
    int k, r;
    cin >> k >> r;

    int shovel = 1;

    while (true) {
        int cost = k * shovel;

        if (cost % 10 == 0 || cost % 10 == r) {
            cout << shovel;
            break;
        }

        shovel++;
    }

    return 0;
}