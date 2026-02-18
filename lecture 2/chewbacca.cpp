#include <iostream>
using namespace std;

int main() {
    string k;
    cin >> k;

    for (int i = 0; i < k.length(); i++) {
        int digit = k[i] - '0';
        int inverted = 9 - digit;

        // First digit should not become 0
        if (i == 0 && inverted == 0) {
            continue;
        }

        // If inverted digit is smaller, replace it
        if (inverted < digit) {
            k[i] = inverted + '0';
        }
    }

    cout << k;

    return 0;
}
