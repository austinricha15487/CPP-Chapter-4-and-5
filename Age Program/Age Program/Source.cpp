// Date: 4/10/18
// Rude about your age
// Author: Austin Richards


#include <iostream>

int main()
{
	int ageInput;

	std::cout << "Please enter how old you are. " << std::endl;
	std::cin >> ageInput;

	if (ageInput >= 1 && ageInput <= 5)
	{
		std::cout << "Damn Meddling kids" << std::endl;
	}
	if (ageInput >= 6 && ageInput <= 12)
	{
		std::cout << "You're starting to become independent, but you're still really annoying." << std::endl;
	}
	if (ageInput >= 13 && ageInput <= 19)
	{
		std::cout << "Crippling Depression and Memes have become a lifestyle. " << std::endl;
	}
	if (ageInput >= 20 && ageInput <= 26)
	{
		std::cout << "You're credit score is shit and you have massive amount of student debt. " << std::endl;
	}
	if (ageInput >= 27 && ageInput <= 35)
	{
		std::cout << "Mid Life Crisis and Chapter 11 Bankruptcy. " << std::endl;
	}

	system("pause");
	return 0; 
}