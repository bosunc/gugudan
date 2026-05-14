#include <iostream>
using namespace std;

int main() {
    int ran_num;
    int num1;

    cout << "guess?" << endl;
    ran_num = rand();
    cin >> num1;
  
    while (num1 != ran_num) {
        if (num1 > ran_num) {
            cout << "bigger than number" <<  endl;
        }
        else {
            cout << "smaller than number" <<  endl;

        }
        
        cin >> num1;

    }
    cout << "you are correct" << ran_num << " is the number" << endl;
    return 0;
}