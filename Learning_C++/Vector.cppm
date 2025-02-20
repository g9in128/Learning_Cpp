export module vector_test;

import <iostream>;
import <vector>;

using namespace std;

export void vectorTest() {
	vector<string> v{ "apple", "watermelon" };

	for (int i = 0; i < size(v); i++) {
		cout << v[i] << ", ";
	}
	
	v.push_back("pear");
	cout << "\n+ pear\n";

	v.push_back("pineapple");
	cout << "+ pineapple\n";

	for (int i = 0; i < size(v); i++) {
		cout << v[i] << ", ";
	}
	cout << endl;
}