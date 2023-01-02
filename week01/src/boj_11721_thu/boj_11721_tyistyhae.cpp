#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[101];
    cin >> str;

    for (int i = 0; i < 101; i++) {
        if (str[i] == 0)
            break;
        cout << str[i];
        if ((i + 1) % 10 == 0)
            cout << endl;
    }

}
