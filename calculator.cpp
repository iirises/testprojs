#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	int b;
	cin >> b;
	char op;
	cin >> op;
	switch(op) {

		case '+':
			cout << a + b << endl;
			break;

		case '-':
			cout << a - b << endl;
			break;
		case '*':
			cout << a * b << endl;
			break;
		case '/':
			cout << a / b << endl;
			break;
		default:
			cout << "Young man, what do you mean by " << a << " " << op << " " << b << " ? \n";
			break;
	}
	return 0;
}
