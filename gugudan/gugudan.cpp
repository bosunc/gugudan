#include <iostream>
using namespace std;

int main() {
    char DS_VAL;

    cout << "input type : DESCENDING => D, ASCENDING => A" << endl;
    cin >> DS_VAL;

    if (DS_VAL == 'a') DS_VAL = 'A';
    if (DS_VAL == 'd') DS_VAL = 'D';

    if (DS_VAL != 'D' && DS_VAL != 'A') {
        cout << "Input value error" << endl;
        return 1;
    }

    if (DS_VAL == 'A') {
        for (int i = 1; i < 100; i++) {
            cout << i << endl;
        }
    }
    else if (DS_VAL == 'D') {
        for (int i = 99; i > 0; i--) {
            cout << i << endl;
        }
    }
    //dificult
    return 0;
}