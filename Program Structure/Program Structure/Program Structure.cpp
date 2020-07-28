// Program Structure.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

char q;


int main()
{
	// IF statements with different methods
	int x;
	x = 10;

		if (x == 10) std::cout << "x = 10" << std::endl;
		
		if (x == 10);
		{std::cout << "x=";
		std::cout << x << std::endl;}

        // IF ELSE statement
		std::cout << "Is x = 10 ?" << std::endl;
		if (x == 10) std::cout << "x = 10" << std::endl;
		else std::cout << "x is not 10" << std::endl;
		 
		//IF, IF ELSE, ELSE STATEMENT
		int z;
		z = -1;
		std::cout << "z is";
		if (z > 0) 
			std::cout << " positive, " << "z=" << z ;
		else if (z < 0)
		    std::cout << " negative, " << "z=" << z;
		else
			std::cout << "z = 0" << std::endl;

		std::cout << std::endl;
// LOOPS AND ITERATION

		//WHILE LOOP 
		int a;
		int n;
		n = 10;
		a = 1;
		// to list first 10 natural numbers
		std::cout << "While loop:" << std::endl;
		while (n > 0) {
			std::cout << a << ",";
			--n;
			++a;
		}
		std::cout << std::endl;

		//DO WHILE LOOP
		n = 10;
		a = 1;
		std::cout << "Do while loop:" << std::endl;
		do {
			std::cout << a << ",";
			a++;
			n--;
		} while (n > 0);
		std::cout << std::endl;
		//FOR LOOP

		n = 10;
		a = 1;
		std::cout << "For loop:" << std::endl;
		for (n = 10; n > 0; n--) {
			std::cout << a << ",";
			a++;
		}
		std::cout << std::endl;
		//Break statement, steps out of current loop
		n = 10;
		a = 1;
		std::cout << "break statement Abort:" << std::endl;
		for (n = 10;n > 0;n--) {
			std::cout << a << ",";
			if (n == 3) {
			std::cout << "Abort";
			break;
		}
				a++;
		}
		std::cout << std::endl;

		//Continue statement, steps out of /skips current iteration of the loop

		n = 10;
		a = 1;
		std::cout << "Continue skipping 5: ";
		for (n = 10;n > 0;n--) {
			if (n == 5) {
				continue;
			}
			std::cout << n << "'";
		}
		std::cout << std::endl;

		//GOTO statement, jumps to point in program (Use with care, if at all)
		n = 10;
		a = 1;
		std::cout << "Using goto statement instead of a loop:" << std::endl;
	mylabel:
		std::cout << a << ",";
		a++;
			if (a < 11) goto mylabel;




		std::cin >> q; 
}

