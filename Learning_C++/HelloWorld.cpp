import <iostream>;
import <ctime>;

int main() {
	time_t start, end;
	start = clock();
	for (int i = 0; i < 1000; i++) {
		std::cout << "testing" << std::endl;
	}
	end = clock();
	std::cout << end - start << std::endl;
}