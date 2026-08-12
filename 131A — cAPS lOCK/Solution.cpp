#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {

    string s;
    cin >> s;

    bool allUpper = true;

   for (int i = 1; i < s.length(); i++) {
        if (!isupper(s[i])) {
            allUpper = false;
            break;
        }
    }

  if (allUpper) {
        for (char &c : s) {
            if (islower(c))
                c = toupper(c);
            else
                c = tolower(c);
        }
    }

    cout << s << endl;

    return 0;
}