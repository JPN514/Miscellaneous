// functions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

char q; 

int squared (int a);
void odd(int p);
void even(int p);
long factorial(int n);
void Fibonacci(int n);
int Fib(int n);


int addition (int a, int b)
{
	//adding two integers
	int r;
	r = a + b;
	return r;
}

int subtraction (int a, int b)
{
	//subtraction with two integers
	int r;
	r = a-b;
	return r;
}

double divide (int a, int b = 2)
{
	//dividing two integers
	//using default value if passed only one parameter
	double r;
	r = a / b;
		return r;
}

void printmessage()
{
	std::cout << "Another function, press q then enter to close" << std::endl;
}


int main()
{
	int x;
	int y;
	int z;
	double c;
	std::cout << "Pick a number: ";
	std::cin >> x;
	std::cout << "And another number: ";
	std::cin >> y;

	std::cout << std::endl;
	//output
	z = addition(x, y);
	std::cout << x << "+" << y << "=" << z << std::endl;

	//output
	z = subtraction(y, x);
	std::cout << y << "-" << x << "=" << z << std::endl;

	//output
	if (y == 2) 
		c = divide(x);
	else c = divide(x, y);
	std::cout << x << "/" << y << "=" << c << std::endl;

	//output
	std::cout << "x squared is: " << squared(x) << ", " << "y squared is: " << squared(y) << std::endl;

	//output
	even(x);
	odd(y);

	// output
	std::cout << x << " factorial is:" << std::endl;
	std::cout << x << "! = " << factorial(x) << std::endl;

//output
	Fibonacci(x);


	printmessage();

	std::cin >> q;
    return 0;
}

int squared (int a)
{
	// squares an integer
	int r;
	r = a*a;
	return r;
}

void odd(int p)
{
	// tests if an integer is odd
	if (p % 2 != 0)
		std::cout << p << " is odd" << std::endl;
	else even(p);
}

void even(int p)
{
	//tests if an integer is even
	if (p % 2 == 0)
		std::cout << p << " is even" << std::endl;
	else odd(p);
}

long factorial(int n)
{
	//calculates n!
	//using recursion
	if (n > 1)
		return(n * factorial(n - 1));
	else
		return 1;
}

void Fibonacci(int n)
{
	// writes out Fibonacci numbers 
	int q;
	q = n;

	std::cout << "The first " << n << " Fibonacci numbers are: " << std::endl;
	do 
	{
		std::cout << Fib((n-q)) << ",";
			q--;
	} while (q!=0);

	std::cout << std::endl; 
}

int Fib(int n)
{
	// generates Fibonacci numbers recursively
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	else
	return Fib(n - 2) + Fib(n - 1);
}