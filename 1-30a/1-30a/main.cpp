#include <iostream>
using namespace std;

int main() {

	int input;
	int money = 1000;

	cout << "how much money do you want to withdrawal" << endl;
	cin >> input;

	money = money - input;
	cout << "you have ";
		cout << "$" << money << " left" << endl;

}