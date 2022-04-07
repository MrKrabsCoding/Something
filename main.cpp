#include <iostream>
#include "math.h"

int getUserInput();

int main(){
	int first{getUserInput()};
	int second{getUserInput()};

	std::cout << multiply(first, second) << "\n";
	return 0;
}

int getUserInput(){
	std::cout << "Enter a number \n";
	int input{};
	std::cin >> input;

	return input;
}