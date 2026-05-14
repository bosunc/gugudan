#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int ran_num;
    int num1;

    srand(time(0));

    ran_num = rand() % 100 + 1;

    cout << "guess?" << endl;
    ran_num = rand();
    cin >> num1;
  
    while (num1 != ran_num) {
        if (num1 > ran_num) {
            cout << "down" <<  endl;
        }
        else {
            cout << "up" <<  endl;

        }
        
        cin >> num1;

    }
    cout << "you are correct" << ran_num << " is the number" << endl;
    return 0;
}