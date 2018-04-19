// Date: 4/12/2018
// Program: Triangle Calculator
// Author: Austin Richards

#include <iostream>
#include <string>
#include <math.h>


 double findEquilateral(int sideA, int sideb)
{
	 double area, sidec;
	std::cout << "Please enter the side length for side A." << std::endl;
	std::cin >> sideA;
	sideb = sideA;
	area = sideA * sideb / 2;
	sidec = sideA;
	std::cout << "The length of side C is " << sidec << " and the area is " << area << std::endl;

	return area, sidec;
}

 double findRightTriangle(int sidec, int sideb)
 {	

	 double area, sideA;
	 std::cout << "Please enter the lengths of side B and side C!" << std::endl;
	 std::cin >> sideb;
	 std::cin >> sidec;
	 sideA = sqrt(sidec * sidec) - sqrt(sideb * sideb);
	 area = sideA * sideb / 2;
	 std::cout << "The length of side C is " << sideA << " and the area is " << area << std::endl;
	
	 return(sideA, area);
 }
 double findIsocelesTriangle(int sideA, int sidec, int heightA)
 {
	
	 double area, sideb;
	 std::cout << "Please enter the lengths of height A and side C" << std::endl;
	 std::cin >> heightA;
	 std::cin >> sidec;
	 sideA = sidec;
	 sideb = sqrt(sideA * sideA) + sqrt(sidec * sidec);
	 area = .5 * sideb * heightA;
	 std::cout << "The length of the base is going to be " << sideb << " and the area is " << area << std::endl;

	 return (sideb, area);
 }
int main()
{
	int heightA;
	int sideA;
	int sideb;
	int sidec;
	double area;
	int selection;

	std::cout << "What kind of triangle do you have? Equilateral, Right, or Isoceles? 1 for Equil, 2 for Right, 3 for Iso" << std::endl;
	
	std::cin >> selection;
	if (selection == 1)
	{
		findEquilateral(sideA, sideb);
	}
	else if (selection == 2)
	{
		findRightTriangle(sideA, sideb);
	}
	else if (selection == 3)
	{
		findIsocelesTriangle(sideA, sideb, heightA);
	}
	system("pause");
	return 0;

}
	
