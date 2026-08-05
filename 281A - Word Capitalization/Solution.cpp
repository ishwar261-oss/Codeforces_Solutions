#include <iostream>
using namespace std;

void wordCapatilize(){

    string s;
    cin >> s;

    s[0] = toupper(s[0]);

    cout << s;

    return 0;
}
int main() {

    string s;
    cin >> s;

    if (s[0] >= 'a' && s[0] <= 'z')
        s[0] = s[0] - ('a' - 'A');

    cout << s;

    return 0;
}

