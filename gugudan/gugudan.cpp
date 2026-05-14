#include <iostream>

using namespace std;

int main() {
	int gugu;
	cout << "input number : " << endl;
	cin >> gugu;

	cout << "you input " << gugu << "dan" << endl;
	cout << "--------------------==------" << endl;
	for (int i = 1; i < 10; i++) {
		cout << gugu << " X " << i << " = " << gugu * i << endl;
	}
	return 0;



}