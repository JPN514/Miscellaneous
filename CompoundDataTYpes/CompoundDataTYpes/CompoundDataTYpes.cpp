// CompoundDataTYpes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <array>
#include<string>

//compound data types
//arrays, character sequences, pointers, dynamic memeory, data structures, 

int q;



int det(int matrix[3][3]);
void printarray(int a[], int length);

void arrays()
{
	int n = 0;
	int a = 6;
	int result = 0;
	int intarray[5] = { 14,52,73,94,25 }; //declares array of integers
	std::cout << intarray[1] << " is the second element of the integer array" << std::endl;
	intarray[3] = a;

	for (n = 0;n < 5;n++)
	{
		result += intarray[n];
		std::cout << result << ",";
	}
	std::cout << "Final result: " << result << std::endl;
    printarray(intarray, 5);
}

void matrices() {
	int matrix[3][3] = { 4,2,6,7,1,2,3,0,9 };

	int m=0; //rows
	int n=0; //columns

	//do loop writes out array matrix in matrix form
	do  {

		for (n = 0;n <3 ;n++) {
			std::cout << " " << matrix[m][n];
		}
		std::cout << std::endl;
		n = 0;
		m++;
	} while (m < 3);


	det(matrix);
}

//arrays as parameters

int det(int matrix[3][3]) {
	//calculates 3x3 determinants by brute force method
	//passes array matrix as parameter
	int deter;
	q = 0;
	int x = 0;
    int y = 0;
	int z = 0;

	x = matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]);
	y = matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]);
	z = matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);

	deter = x - y + z;
	std::cout << deter;
	return deter;

}

void printarray(int a[], int length) {
	int n=0;
	//prints array passing the array as a parameter
	for (n = 0; n < length; n++) {
		std::cout << a[n] ;
		if (n < (length - 1)) {
			std::cout << ", ";
		}
	}
}

//library container arrays
int libarray() {
	int total=0;
	std::cout << std::endl;
	//declares the array as a container library array
	std::array <int, 6> myarray={ 34,7,6,21,56,90 };

	for (int i = 0; i < myarray.size(); i++) {
		std::cout << myarray[i];
		if (i < (myarray.size() - 1)) {
			std::cout << ", ";
		}
	}
	//accumulates the values of myarray
	for (int i = 0; i < myarray.size();i++) {
		total += myarray[i];
	}
	std::cout << std::endl << total << std::endl;
	return total;
}

char strings() {
	//declares a string
	char myword[20] = { 'H','E', 'L','L','O','\0'};
	std::cout << myword;

	//Question and answer using arrays and strings
	char question1[50]= " what is your name? ";
	std::string question2;
	char answer1[80];
	std::string answer2;
	question2 = "Where do you live?";

	std::cout << question1;
	std::cin >> answer1;
	std::cout << question2;
	std::cin >> answer2;

	std::cout << "Hello " << answer1 << " from " << answer2 << std::endl;

	return 0;
}

//POINTERS!!!
int pointers(){
	int n=0;
	int k = 0;
	int *address;
//use & to assign the memory address of mystring to address
	// & "address of"
	address = &n;
	*address = 10;
	address = &k;
	*address = 27;
	std::cout << n << ", " << k << std::endl;
	// * gives the value pointed to by that variable
	// * "value pointed to by"
	
	return 0;
}

int morepointers() {
	int numbers[10];
	int * pointer; 
	//pointers and arrays
	// they support the same set of operations
	pointer = numbers; // this makes pointer equal to numbers array and now pointer can be assigned values
	// NOTE: numbers can no longer be assigned anyhting, and is represented by the same 10 blocks of memory.

	for (int n = 0; n < 10; n++) {
		*pointer = 10 + (n*10); //assigns pointer(array) values according to each increment of the loop.
		pointer++; // moves pointer to the next item in the array 
	}

	for (int n = 0; n < 10; n++) { // writes out the contents of numbers
		std::cout << numbers[n];
		if (n < 10-1) {
			std::cout << ", ";
		}
		else { std::cout << std::endl; }
	}

	for (int n = 0; n < 10; n++) { // writes out the addresses of numbers
		std::cout << pointer;
		if (n < 10 - 1) {
			std::cout << ", ";
		}
		pointer++;
	}

	//pointers and constants
	{
		std::cout << std::endl;
		int x;
		int y = 9;
		int const * p=&y;//p has the address of variable y and is constant
		
		x = *p; // assigns x the value pointed to by p, equivalently x = y. 
		std::cout << x << std::endl;
	}

	{
		// uses pointers to point to pointers
		int a;
		int * b;
		int ** c;
		a = 45;
		b = &a;
		c = &b;
		std::cout <<  "c address and value of address stored in c and the value stored at that address: " << c << ", " <<*c << ", " << **c << std::endl;
		std::cout << "b address and value stored in address: " << b << ", " << *b << std::endl;
	}
     return 0;
}

void increment(int* start, int* stop) {
	int * current = start; // assigns pointer current the value of start(first element of numbers)
	while (current != stop) {
		++(*current); //increment value pointed to	
		++current; // increment pointer
	}
	
	
}

void print(const int * start, const int * stop) {
	int const * current = start; // assigns pointer current the value of start(first element of numbers)
	while (current!=stop) {
		std::cout << *current;
		if (current < stop - 1) {
			std::cout << ", ";
		}
		++current; // increment pointer 
	}
	std::cout << std::endl;
}

//Pointers as arguments
int pointarguments() {
	// increment an array using pointers
	int numbers[] = { 10,20,30, 40, 50, 60 };

	increment(numbers, numbers + 6); // increment each element of numbers by 1
	print(numbers, numbers + 6);
	
	return 0;
}

int main()
{
	arrays();
	std::cout << std::endl;
	matrices();
	std::cout << std::endl;
	libarray();
	std::cout << std::endl;
	strings();
	std::cout << std::endl;
	pointers();
	std::cout << std::endl;
	morepointers();
	std::cout << std::endl;
	pointarguments();
	std::cout << std::endl;
	//pointers and string literals
	const char * word = "hello"; // pointer word points to a sequence of characters "hello" in the memory addresses
	std::cout << *(word+4); //prints "o"

	//remember: pointers and functions!!
	std::cin >> q;
    return 0;
}

