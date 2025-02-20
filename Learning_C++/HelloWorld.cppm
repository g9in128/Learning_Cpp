export module hello_world;

import <iostream>;
import <ctime>;
import <format>;

export void helloWorld() {
	time_t start, end;
	start = clock();
	for (int i{}; i < 1000; i++) {
		std::cout << "Hello World" << std::endl;
	}
	end = clock();
	std::cout << std::format("It took {} seconds",(static_cast<double>(end) - start) / 1000) << std::endl;
}