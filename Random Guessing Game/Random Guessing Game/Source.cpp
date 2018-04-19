// Date 4/10/18
// Guessing Game
// Author: Austin Richards

#include <iostream>
#include <random>
#include <time.h>

int main()
{
	int numChoice;
	int secretNum;
	
	srand(time(NULL));

	secretNum = rand() % 100 + 1;
	
	do{
		
		std::cout << "Please pick a number between 1 and 10." << std::endl;
		std::cin >> numChoice;

		if (numChoice == secretNum)
		{
			std::cout << "Congratulations you guessed it! " << secretNum << std::endl;
		}
		else
		{
			std::cout << "You trash can you didn't guess the number, which is  " << secretNum << std::endl;
		}
	} while (numChoice != secretNum);
		


	system("pause");
	return 0;
}