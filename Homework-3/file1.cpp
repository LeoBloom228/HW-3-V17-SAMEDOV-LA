#include <iostream>
#include <cmath>
#include <iomanip>

//Task 1

void task1()

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

}
//Task 2

void task2()
{

	int day, month;

	std::cout << "enter the number of a day and a number of a month: ";
	std::cin >> day >> month;

	int daysinmonth [] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if (month < 1 || month > 12 || day < 1 || day > daysinmonth[month - 1])
	{
		std::cout << "incorrect data!" << std::endl;
		return;

	}
	int remainingdays = daysinmonth[month - 1] - day;
	
	std::cout << "this number of days is left until the end of the month: " << remainingdays << std::endl;

}
//Task 3 using WHILE

void task3usingwhile()
{
	int num = 10;

	while (num <= 99)
	{
		int tens = num / 10;
		int units = num % 10;

		if (tens != units)
		{
			std::cout << num << " ";

		}
		num++;
	}
	
}

//Task 3 using DO WHILE

void task3usingdowhile() 
{
	int num = 10;      

	do 
	{
		int firstDigit = num / 10;     
		int secondDigit = num % 10;    

		if (firstDigit != secondDigit)
			std::cout << num << std::endl;       

		num++;
	} 
	while (num <= 99);                

}

//Task 3 using FOR

void task3usingfor() 
{
	for (int num = 10; num <= 99; ++num) 
	{  
		int firstDigit = num / 10;          
		int secondDigit = num % 10;         

		if (firstDigit != secondDigit)
			std::cout << num << std::endl;           
	}

}

//Task 4

void task4() 
{
	
	int numbers[] = { 1, 6, 2, 7, 3, 8, 4, 9 };
	int repeats[] = { 1, 1, 2, 2, 3, 3, 4, 4 }; 

	int size = sizeof(numbers) / sizeof(numbers[0]);

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < repeats[i]; j++) {
			std::cout << numbers[i];
			if (j < repeats[i] - 1) std::cout << "  ";
		}
		std::cout << std::endl;
	}

}

//Function for task 5


bool computey(double x, double& y)
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

void task5() 
{
	double a, b, h;
	std::cout << "input a: ";
	std::cin >> a;
	std::cout << "input b: ";
	std::cin >> b;
	std::cout << "enter h: ";
	std::cin >> h;

	std::cout << std::fixed << std::setprecision(4);
	std::cout << "\n  x\t\t y\n";
	std::cout << "-------------------------\n";

	for (double x = a; x <= b; x += h) 
	{
		double y;
		if (computey(x, y)) 
		{
			std::cout << std::setw(6) << x << "\t " << std::setw(8) << y << std::endl;
		}
		 
		{
			std::cout << std::setw(6) << x << "\t " << "function is not defined" << std::endl;
		}
	}

}

//Task 6

// Helper function for calculating the y value
double computey(double x, double a, double b, double c) 
{
	if (x < 93)
		return a + b * x;
	else if (x <= 120)
		return b - a * c;
	else
		return a * b * x;
}

void task6() 
{
	double a, b, c;
	double x_start, x_end, h;

	// Entering parameters
	std::cout << "Please, enter parameters a, b, c: ";
	std::cin >> a >> b >> c;

	// Entering x range and step
	std::cout << "Input the start of x: ";
	std::cin >> x_start;
	std::cout << "Input the end x: ";
	std::cin >> x_end;
	std::cout << "Input step h: ";
	std::cin >> h;

	std::cout << std::fixed << std::setprecision(4);
	std::cout << "\n   x\t\t y\n";
	std::cout << "-----------------------\n";

	for (double x = x_start; x <= x_end; x += h) {
		double y = computey(x, a, b, c);
		std::cout << std::setw(6) << x << "\t " << std::setw(8) << y << std::endl;
	}

}

int main()
{
	task1();
	task2();
	task3usingwhile();
	task3usingdowhile();
	task3usingfor();
	task4();
	task5();
	task6();
	
	return 0;
}