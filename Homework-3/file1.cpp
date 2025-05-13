//Task 1

//#include <iostream>
//#include <cmath>
//#include <iomanip>

//int main()

//{
	//double x, y;

	//std::cout << "Input coordinates of the point (x,y): ";
	//std::cin >> x >> y;

	//if (x > -15 && x < 0 && y > -15 && y < 0)
	//{
		//std::cout << "No" << std::endl;

	//}

	//else if (x < -15 || x > 0 || y < -15 || y > 0)
	//{
		//std::cout << "Yes" << std::endl;

	//}
	//else
	//{
		//std::cout << "On border" << std::endl;

	//}


	//return 0;
//}

//Task 2

//#include <iostream>

//int main()
//{

	//int day, month;

	//std::cout << "Enter the number of a day and a number of a month: ";
	//std::cin >> day >> month;

	//int daysinMonth [] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	//if (month < 1 || month > 12 || day < 1 || day > daysinMonth[month - 1])
	//{
		//std::cout << "Incorrect data!" << std::endl;
		//return 1;

	//}
	//int remainingDays = daysinMonth[month - 1] - day;
	
	//std::cout << "This number of days is left until the end of the month: " << remainingDays << std::endl;

	//return 0;
//}

//Task 3 using WHILE

//#include <iostream>
//#include <cmath>
//#include <iomanip>

//int main()
//{
	//int num = 10;

	//while (num <= 99)
	//{
		//int tens = num / 10;
		//int units = num % 10;

		//if (tens != units)
		//{
			//std::cout << num << " ";

		//}
		//num++;
	//}

	//return 0;
	
//}

//Task 3 using DO WHILE

//#include <iostream>
//#include <cmath>
//#include <iomanip>

//int main() 
//{
	//int num = 10;      

	//do 
	//{
		//int firstDigit = num / 10;     
		//int secondDigit = num % 10;    

		//if (firstDigit != secondDigit)
			//std::cout << num << std::endl;       

		//num++;
	//} 
	//while (num <= 99);                

	//return 0;
//}

//Task 3 using FOR

//#include <iostream>
//#include <cmath>
//#include <iomanip>

//int main() 
//{
	//for (int num = 10; num <= 99; ++num) 
	//{  
		//int firstDigit = num / 10;          
		//int secondDigit = num % 10;         

		//if (firstDigit != secondDigit)
			//std::cout << num << std::endl;           
	//}

	//return 0;
//}

//Task 4

//#include <iostream>
//#include <cmath>
//#include <iomanip>

//int main() 
//{
	
	//int numbers[] = { 1, 6, 2, 7, 3, 8, 4, 9 };
	//int repeats[] = { 1, 1, 2, 2, 3, 3, 4, 4 }; 

	//int size = sizeof(numbers) / sizeof(numbers[0]);

	//for (int i = 0; i < size; i++) {
		//for (int j = 0; j < repeats[i]; j++) {
			//std::cout << numbers[i];
			//if (j < repeats[i] - 1) std::cout << "  ";
		//}
		//std::cout << std::endl;
	//}

	//return 0;
//}

//Task 5

#include <iostream>
#include <cmath>
#include <iomanip>

bool computeY(double x, double& y) 
{
	if (fabs(x * x - 2) < 1e-6) 
	{
		
		return false;
	}
	if (x * x * x - 1 < 0) 
	{
		
		return false;
	}

	y = (x + 4) / (x * x - 2) + sqrt(x * x * x - 1);
	return true;
}

int main() 
{
	double a, b, h;
	std::cout << "Input a: ";
	std::cin >> a;
	std::cout << "Input b: ";
	std::cin >> b;
	std::cout << "Enter h: ";
	std::cin >> h;

	std::cout << std::fixed << std::setprecision(4);
	std::cout << "\n  x\t\t y\n";
	std::cout << "-------------------------\n";

	for (double x = a; x <= b; x += h) 
	{
		double y;
		if (computeY(x, y)) 
		{
			std::cout << std::setw(6) << x << "\t " << std::setw(8) << y << std::endl;
		}
		else 
		{
			std::cout << std::setw(6) << x << "\t " << "Function is not defined" << std::endl;
		}
	}

	return 0;
}