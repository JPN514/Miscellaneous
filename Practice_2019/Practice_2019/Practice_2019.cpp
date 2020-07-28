// Practice_2019.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> // header for preprocessor
#include<string>
#include <sstream>
using namespace std; // allows us to drop std prefix 

struct footballclub { // a structure for football clubs
	string name;
	string ground;
}club[4];

int addition(int x, int y)
{
	int r;
	r = x + y;
	return r;
}

int subtraction(int x, int y) 
{
	int r;
	r = x - y;
	return r;
}

void doubles(int& a, int& b, int& c)
{
	a = a * 2;
	b = b * 2;
	c = c * 2;
}

string concatenate(const string& a, const string& b, const string& c)
{
	return a + b + c;
}

long factorial(int a)
{
	if(a>1)
		return (a*factorial(a - 1));
	else 
		return 1;
}

bool power2(int n)
{
	if (n % 2 != 0 && n != 1)
		return false;
	else if (n == 1)
		return true;
	else
		return power2(n / 2);
}

void printarray(int arg[],int length) {
	int n;
	for (n = 0;n < length;++n) {
		std::cout << arg[n] << " ";
	}
}

void printarray1(char arg[], int length) {
	int n;
	for (n = 0;n < length;++n) {
		std::cout << arg[n];
	}
}

void increment_all(int* start, int* stop) {
	int* current = start;
	while (current != stop) {
		++(*current); //increment value pointed to by current
		++current; //increment current
	}
}

void print_numbers(int* start, int*stop) {
	int* current=start;
	while (current != stop) {
		std::cout << *current << endl; //prints what current points to
		++current; //increments current
	}

}

void printclub(footballclub team);


int main() // function main always runs when program runs
{
	// BASIC CONSOLE OUTPUT
	std::cout << "Welcome back " << endl; //standard character output device
	std::cout << "CUNT" << endl << endl;

	//VARIABLES AND DECLARATION
	int a, b, c, sum;
	string word1, word2, word3, word4; // declares variable name and type

	a = 1, b = 2, c = a + b;

	sum = a + b + c;

	std::cout << sum << endl;

	word1 = "oh ", word2 = "he's ", word3 = "given him";
	word4 = word1 + word2 + word3; //concatenating 3 strings

	std::cout << word4 << endl << endl;

	//CONSTANTS AND INPUTS
	const double pi = 3.14159;
	double circle, rad, area;

	std::cout << "Type the radius of the circle?" <<endl;
		cin >> rad;
		cin.get();

	area = pi *rad* rad;

	std::cout <<  "The area of the circle is " << area << endl<< endl;

	a = a++; //increases value of a by 1
	b = b--; //decreases value of b by 1

	std::cout << a << " " << b << endl << endl; //printing new values of a and b.

	string name; // getting and printing the user's name.
	std::cout << "What is your name? ";
		cin >> name;
		cin.get();
		std::cout << "hello " << name << endl <<endl;


	//STRINGSTREAM allows more control over user input
		string mystr;
		double price, amount;

		std::cout << "Enter a price: " <<endl;
		getline(cin, mystr); //assigns user input to mystr variable.
		stringstream(mystr) >> price; //extract values from mystr into price variable
		std::cout << "Enter a quantity: " << endl;
		getline(cin, mystr);
		stringstream(mystr) >> amount;
		std::cout << "Total is: " << price*amount << endl << endl;


		//STATEMENTS AND FLOW CONTROL

		int x = -6;

		if (x > 0) // basic if else statement
			std::cout << "x is positive"<<endl <<endl;
		else std::cout << "x is non positive" <<endl<<endl;
		
		int n = 10;
		//while loop
		while (n > 0) {
			std::cout << n << endl;
			n = n--;
		}
		std::cout << "Liftoff!"<<endl<<endl;

		int m = 10;
		//do while loop, condition is evaluated after iteration
		do {
			std::cout << m << endl;
			m = m--;
		} while (m > 0);
		std::cout << "Liftoff!" <<endl<<endl;

		//FOR loop
		int i = 100, j = 0;
		for (i, j; i != j; --i, ++j) {
			std::cout << i << "  " << j << endl;
		}
		std::cout << i << "  " << j << endl << endl;

		//JUMP statements

		//break the loop
		for (n = 10; n > 0; --n) {
			std::cout << n << endl;
			if (n == 3) {
				std::cout << "ABORTED" << endl << endl;
				break;
			}
		}


		// continue statement skips the rest of the iteration
		for (n = 10;n > 0;--n) {
			if (n == 9) continue;
			std::cout << n << endl;
		}
		std::cout << "NO 9!" << endl << endl<< endl;

		
		//FUNCTIONs
		

		std::cout << "Enter a number: "<< endl; 
		getline(cin, mystr);
		stringstream(mystr)>> a;
		std::cout << "Enter another number: " << endl;
		getline(cin, mystr);
		stringstream(mystr) >> b;
		std::cout << a << "+" << b << "=" << addition(a, b) << endl; //takes user input and adds together in the function
		std::cout << a << "-" << b << "=" << subtraction(a, b) << endl << endl; //takes user input and subtracts using function
		std::cout << "Enter another number: " << endl;
		getline(cin, mystr);
		stringstream(mystr) >> c;
		doubles(a, b, c);
		std::cout << a << ", " << b << ", " << c << endl << endl;


		std::cout << concatenate(word1, word2, word3)<<endl <<endl; // uses concatenate function to put sentence together.

		std::cout << factorial(5) << endl << endl;

		std::cout << power2(120) << endl << endl;


		//ARRAYS

		int foo[5] = { 1,2,3,4,5 }; //initializing the array

		for (i = 0; i < 5; ++i) { //for loop to print the array contents
			std::cout << foo[i] << ", "<<endl;
		}

		int z,l=0;

		z = foo[2];
		
		for(l=0;l<5;++l) { //printing array again
			if (l == 2) 
				std::cout << z << ", ";

			else std::cout << foo[l] << ", ";
		}

		std::cout << endl;

		int k = 0,result=0; //summing the contents of array foo.
		do {
			result += foo[k];
			std::cout << result << endl;
			++k;
		} while (k < 5);

	std:cout << endl;

		int square[3][3]; // multidimensional array writing and printing
		int r=0;
		r = 0, c = 0;
		for (r = 0;r < 3;++r) {
			for (c = 0;c < 3;++c) {
				square[r][c] = 3 * r + c + 1;
			}
			c = 0;
		}

		r = 0, c = 0;

		do {
			do {
				std::cout << square[r][c] << endl << endl;
				++c;
			} while (c < 3);
			c = 0;
			++r;
		} while (r < 3);



		int foo1[11] = { 0,10,20,30,40,50,60,70,80,90,100 };
		printarray(foo1, 11); //print array using array as parameter for a function
		std::cout << endl << endl;

		char myword[] = { 'I','\0','l','o','v','e','\0','t','h','i','s','\0','c','l','u','b' }; //character array similar to a string 

		printarray1(myword, 20);
		std::cout << endl << endl;


		//POINTERS

		int * p=&a; //p is the pointer which stores the address of a.

		
		std::cout << "a's address is: " <<  p << endl << endl;

		int q;

		q = *p; //assign q the value pointed to by p, the dereference operator *.

		std::cout << a << " "<< "the value pointed to by p is: " << q << endl << endl;

		if (a != q) std::cout << "FALSE" << endl; else std::cout << "TRUE" << endl; // to check a == q(the value pointed to by p)

		int firstvalue = 5, secondvalue = 15;
		int * p1, *p2;

		p1 = &firstvalue;  // p1 = address of firstvalue
		p2 = &secondvalue; // p2 = address of secondvalue
		*p1 = 10;          // value pointed to by p1 = 10
		*p2 = *p1;         // value pointed to by p2 = value pointed to by p1
		p1 = p2;           // p1 = p2 (value of pointer is copied)
		*p1 = 20;          // value pointed to by p1 = 20

		cout << "firstvalue is " << firstvalue << '\n';
		cout << "secondvalue is " << secondvalue << '\n';


		//pointers as arguments

		int numbers[] = { 10,20,30 }; // the array uses 3 consecutive storage bytes/bits/blocks

		increment_all(numbers, numbers + 3); //calls the array as argument
		print_numbers(numbers, numbers + 3);


		//pointers to pointers

		char w = 'Z';
		char* pointer;
		char** pointer1;

		pointer = &w;
		pointer1 = &pointer;

		std::cout << endl << endl;
		std::cout << pointer1 << endl; //value of pointer 1
		std::cout << *pointer1 << endl; //value pointed to by pointer1 (ie pointer)
		std::cout << **pointer1 << endl; //value pointed to by waht pointer 1 points to
		std::cout << w << endl;
		std::cout << pointer << endl;
		std::cout << *pointer << endl; //value pointed to by pointer

		//DATA STRUCTURES

		struct fruit {
			int weight;
			double price;
		}apple, banana, orange; //declares a structure fruit, which has 3 objects apple, banana and orange. has 2 members weight and price.


		apple.weight = 5; // use . to access a member of the object
		apple.price = 0.4;

		struct movie {
			string title;
			int year;
		}mine, yours;

		mine.title = "Bad Boys";
		mine.year = 1995;

		std::cout << "What is your favourite film?" << endl << "Enter title: ";
		getline(cin, yours.title);
		std::cout << "Year: ";
		getline(cin, mystr);
		stringstream(mystr) >> yours.year;

		std::cout << endl << "My favourite film is: " << mine.title << " (" << mine.year << ")" << endl;
		std::cout << "Your favourite film is: " << yours.title << " (" << yours.year << ")" << endl << endl;


		
		//assigning the info to the football club structure
		for (n = 0;n < 4;++n) { 
			std::cout << endl << "Enter a football team: ";
			getline(cin, club[n].name);
			std::cout  << "Name of their ground: ";
			getline(cin, club[n].ground);
		}

		for (n = 0;n < 4;++n) {
			printclub(club[n]);
		}

		footballclub * pclub; // a pointer to point to objects of the structure football club

		pclub = &club[1]; // pclub points to club[1] in the array club

		std::cout << endl << pclub->name << endl; //can access the diffent members of the object pclub points to
		std::cout << endl << pclub->ground << endl; // can use -> operator
		std::cout << endl << (*pclub).name << endl; // or the deference operator with careful use of brackets.
		std::cout << endl << (*pclub).ground << endl;


		//NESTED STRUCTURES

		struct friends {
			string name;
			string email;
			footballclub club; //can nest another structure within the friends structure
			int age;
		}phil, bill, carl;

		friends * pfriend; //pointer to an object in the friends structure

		pfriend = &phil;

		phil.name = "Football Phil";
		phil.email = "football.phil@stfc.com";
		phil.club.name = "Swindon Town"; // assigning value to the footballclub structure's object members within the structure
		phil.club.ground = "County Ground";
		phil.age = 105;


	cin.get(); // pauses the console
    return 0;
}

void printclub(footballclub team) {
	std::cout << endl<< team.name << ", home ground: " << team.ground << endl;
}




