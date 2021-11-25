// add_digits
// Amir Afunian
// 11/24/2021

/* Challenge #375 [Easy] from r/dailyprogrammer, as described below: 
* 
A number is input in computer then a new no should get printed by adding one to each of its digit.
If you encounter a 9, insert a 10 (don't carry over, just shift things around).

For example, 998 becomes 10109.
*/

#include <iostream>
#include <vector>
using namespace std;

void add_digits();

int main() {
	add_digits();
	return 0;
}

void add_digits() {
	vector<int> store;
	int num;
	cout << "Enter a digit: ";
	cin >> num;
	while (num >= 10) {
		store.push_back(num % 10);
		num /= 10;
	}
	store.push_back(num);
	cout << "Output: ";
	for (int i = store.size() - 1; i >= 0; --i) {
		cout << store[i] + 1;
	}
	cout << '\n';
}

/* Casting Method
void add_digits() {
	string num;
	string new_num = "";
	cout << "Enter a digit: ";
	cin >> num;
	int test;
	for (char x : num) {
		test = 0;
		test = x - '0' + 1;
		new_num.append(to_string(test));
	}
	cout << "Output: " << new_num << '\n';
}
*/