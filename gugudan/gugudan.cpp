#include <iostream>
using namespace std;

int main() {
    int ran_num;
    int num1;

    cout << "guess?" << endl;
    ran_num = rand();
    cin >> num1;
    if (num1 == ran_num) {
        cout << "correct!! " << endl;
    }
    else if (num1 > ran_num) {
        cout << "bigger than the answer" << endl;

    }
   // cout << ran_num << endl;

    return 0;
}