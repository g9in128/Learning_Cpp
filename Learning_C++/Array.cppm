export module array_test;

import <iostream>;
import <array>;

using namespace std;

export void arrayTest(){
	array arr = { "����", "���", "��", "����"};

	for (int i = 0; i < size(arr); i++) {
		cout << arr[i] << ", ";
	}
	cout << endl;
}