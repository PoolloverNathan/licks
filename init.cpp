#include <iostream>
int main(int argc, char** argv) {
	std::cout << "Program name";
	if (argc >0) {
		std::cout << ": " << argv[0];
	} else {
		std::cout << "less";
	}
	std::cout << "\n";
	for (int i = 1; i < argc; i++) {
		
	}
}
