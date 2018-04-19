// Date 4/10/18
// Program: Door Prize
// Author: Austin Richards


#include <iostream>
int main()
{
	int doorChoice;
	std::cout << "Please pick a door between 1, 2 or 3!" << std::endl;
	std::cin >> doorChoice;

	if (doorChoice == 1)
	{
		std::cout << "The Prize behind door one is a ............ TrashCan!" << std::endl;
	}
	else if (doorChoice == 2)
	{
		std::cout << "The prize behind door two is ....... a Garbage Disposal" << std::endl;
	}
	else if (doorChoice == 3)
	{
		std::cout << "The prize behind this door is ... The One and Only.... Dylan Peiffer" << std::endl;
	}
	else
	{
		std::cout << "That isn't an option you trash can." << std::endl;
	}
	system("Pause");
	return 0;
}