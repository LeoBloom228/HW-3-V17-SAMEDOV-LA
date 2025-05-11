//Task 1

#include <iostream>
#include <cmath>
#include <iomanip>

int main()

{
	double x, y;

	std::cout << "Input coordinates of the point (x,y): ";
	std::cin >> x >> y;

	if (x > -15 && x < 0 && y > -15 && y < 0)
	{
		std::cout << "No" << std::endl;

	}

	else if (x < -15 || x > 0 || y < -15 || y > 0)
	{
		std::cout << "Yes" << std::endl;

	}
	else
	{
		std::cout << "On border" << std::endl;

	}


	return 0;
}