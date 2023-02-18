#include<iostream>

int main() {
	int inputYear;
	bool isLeapYear = false;

	std::cin >> inputYear;

	if (inputYear % 4 == 0 && inputYear % 100 != 0) {
		std::cout << inputYear << " - leap year" << std::endl;
	}
	else if(inputYear % 4 == 0 && inputYear % 400 == 0){
		std::cout << inputYear << " - leap year" << std::endl;
	}
	else {
		std::cout << inputYear << " - not a leap year" << std::endl;
	}
}