export module hello_world;

import <iostream>;
import <ctime>;
import <format>;

export void helloWorld() {
	time_t start, end;
	start = clock();
	for (int i = 0; i < 1000; i++) {
		std::cout << "Hello World" << std::endl;
	}
	end = clock();
	std::cout << std::format("It took {} seconds",((double) end - start) / 1000) << std::endl;
}