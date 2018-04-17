// Date: 4/12/2018
// Program: Roman Numeral Calculator
// Author: Austin Richards

#include <iostream>
#include <string>
#include <random>
#include <time.h>


int main()
{
	int userInput;
	int randomSide;
	srand(time(0));
	randomSide = rand() % 6 + 1;

	std::cout << "Please guess which side the die will land on!!!" << std::endl;
	std::cin >> userInput;
	do{
		if (userInput != randomSide)
		{
			std::cout << "Oops! Try Again!" << std::endl;
			std::cin >> userInput;
		}
		
	} while (userInput != randomSide);
	
	std::cout << "You guessed correctly! " << std::endl;

	system("pause");
	return 0;
}
