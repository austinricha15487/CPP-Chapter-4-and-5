// Date 4/10/18
// Random Number Generator
// Author: Austin Richards

#include <iostream>
#include <random>
#include <time.h>

int main()
{
	int numChoice;
	int secretNum;
	int count = 1;

	srand(time(NULL));
	secretNum = rand() % 100 + 1;

	do{
		std::cout << "Please pick number between 1-100" << std::endl;
		std::cin >> numChoice;

		if (numChoice > secretNum)
		{
			std::cout << "Sorry the number is lower." << std::endl;
			count = count + 1;
		}
		else if (numChoice < secretNum)
		{
			std::cout << "Sorry the number is higher." << std::endl;
			count = count + 1;
		}
	} while (numChoice != secretNum);

	std::cout << "Congratulations you finally got the number right. The number was " << secretNum <<" It took you only " << count << " tries" <<  std::endl;

	system("pause");
	return 0;
}