#include <iostream>
using namespace std;

int main() {
    char DS_VAL; //ice ===== 3334

    cout << "input type : DESCENDING => D, ASCENDING => A" << endl;
    cin >> DS_VAL; // input 한글 +++

    if (DS_VAL == 'a') DS_VAL = 'A';
    if (DS_VAL == 'd') DS_VAL = 'D';

    if (DS_VAL != 'D' && DS_VAL != 'A') {
        cout << "Input value error" << endl;
        return 1; // error code // sorcr
    }

    if (DS_VAL == 'A') { // fandan
        for (int i = 1; i < 100; i++) {
            cout << i << endl;
        } // 주석추가 123
    }
    else if (DS_VAL == 'D') {
        for (int i = 99; i > 0; i--) {
            cout << i << endl; // end ;;
        }
    }
    //dificult level 12
    return 0;
}