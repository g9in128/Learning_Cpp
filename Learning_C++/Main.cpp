import <iostream>;
import <map>;
import <functional>;
import <format>;
import <string>;
import <windows.h>;

import enum_test;
import hello_world;
import space_ship_operator;
import array_test;
import vector_test;


typedef struct Course {
	std::string name;
	std::function<void()> func;
} Course;

int main() {
	std::map<int, Course> book;
	int order{ 1 };
	std::function<void()> func = helloWorld;
	book.insert({ order++, Course{"Hello World",func}});
	func = enumTest;
	book.insert({ order++, Course{"Enum",func} });
	func = spaceShip;
	book.insert({ order++, Course{"Space Ship Operator",func} });
	func = arrayTest;
	book.insert({ order++, Course{"Array",func} });
	func = vectorTest;
	book.insert({ order++, Course{"Vector",func} });

	while (1) {
		system("cls");
		std::cout << "0. 종료\n";
		for (int i{ 1 }; i < book.size() + 1; i++) {
			auto res = book.find(i);
			Course course;
			if (res != book.end()) {
				course = res->second;
			}
			else {
				break;
			}
			std::cout << std::format("{0}. {1}\n",i, course.name);
		}
		std::cout << "몇번을 실행 할까요? >>";
		int ur;
		std::cin >> ur;

		if (ur == 0) {
			break;
		}
		system("cls");

		auto res = book.find(ur);
		if (res != book.end()) {
			res->second.func();
		}
		else {
			std::cout << "그런건 없어요~!" << std::endl;
		}
		system("pause");
	}

}