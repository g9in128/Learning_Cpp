export module space_ship_operator;

import <compare>;
import <iostream>;
import <format>;

using namespace std;

export void spaceShip() {
	int num1{ 39 };
	double num2{ 27.0 };

	strong_ordering res = num1 <=> 66;
	cout << format("{3} <=> {4}\nless = {0}, equal = {1}, greater = {2}\n\n",
		res == strong_ordering::less, res == strong_ordering::equal, res == strong_ordering::greater,num1,66);

	partial_ordering res2 = num2 <=> 3.14159265;
	cout << format("{4} <=> {5}\nless = {0}, equivalent = {1}, greater = {2}, unordered = {3}\n",
		res2 == partial_ordering::less, res2 == partial_ordering::equivalent, 
		res2 == partial_ordering::greater, res2 == partial_ordering::unordered,num2,3.14159265) << endl;
}