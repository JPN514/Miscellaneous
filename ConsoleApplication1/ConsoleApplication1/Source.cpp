#include <iostream>
#include <string>

//basic stuff in C++

int q;
double a;
double b;
double c;
double d=1;
double e=0;
double f=3;
double total;
double pi = 3.14;
double r;

int main()
{
	//addition
	a = 1, b = 2, c = 3;
	total = a + b + c;

	auto x = R"(This is basic addition, a+b+c=)";
	std::cout << x;
	std::cout << total << std::endl;

	//string
	std::string mystring;
	mystring = "This is a string";
	std::cout << mystring<< std::endl;

	//formulae(circumference of circle)
	std::cout << "Enter the radius of the circle: ";
	std::cin >> r;
	std::cout << "Circumference of circle is approx.: ";
	std::cout << pi*2*r << std::endl;

	//Compound assigments
	total += a; //total = total+a
	std::cout << "total + a = ";
	std::cout << total << std::endl;
	total -= b; //total = total-b
	std::cout << "total - b = ";
	std::cout << total << std::endl;
	total /= (b + c); //total =total/(b+c)
	std::cout << "total/(b+c) = ";
	std::cout << total << std::endl;
	total *= (a + b + c); //total = total*(a+b+c)
	std::cout << "total*(a+b+c) = ";
	std::cout << total << std::endl;

	//INCREMENTS
	total--;   //total-1
	std::cout << "Reduced total is: " << total << std::endl;
	total++;   //total+1
	std::cout << "Restored total is: " << total << std::endl;
	
	//RELATIONSHIP COMPARISONS
	// a>b? here returns 0 is false
	std::cout << "is a>b? " << (a > b) << std::endl;
	// b<c?, here returns 1 is true
	std::cout << "is b<c? " << (b < c) << std::endl;
    // is a=a?
	std::cout << "Does a=a? " << (a == a) << std::endl;

	//LOGIC operators

	// NOT !
	std::cout << "NOT true: " << !true << std::endl;
	std::cout << "NOT false: " << !false << std::endl;

	// AND &&
	std::cout << "True AND True: " << (true && true) << std::endl;
	std::cout << "True AND False: " << (true && false) << std::endl;
	std::cout << "False AND True: " << (false && true) << std::endl;
	std::cout << "False AND False: " << (false && false) << std::endl;

	// OR ||
	std::cout << "True OR True: " << (true || true) << std::endl;
	std::cout << "True OR False: " << (true || false) << std::endl;
	std::cout << "False OR True: " << (false || true) << std::endl;
	std::cout << "False OR False: " << (false || false) << std::endl;


	// conditional ternary operator ?
	// condition ? result1 : result2
	// returns result1 if true, result 2 if false
	// using 1 for true, 0 for false.
	std::cout << "7==9 ? 1 : 0 :" << (7 == 9 ? 1 : 0) << std::endl;
	std::cout << "2<=3 ?? 1 : 0 :" << (2 <= 3 ? 1 : 0) << std::endl;


	// Comma operator
	// a = (b=3, b+1), sets b=3 and a=4. e.g.

	//below d=1, e=0, f=3

	std::cout << "Using the comma operator:" << std::endl;
	std::cout << "e = (d=1, d+f).";
	std::cout << "So e=" << (e = (d = 1, d + f)) << std::endl;

	//INPUT/OUTPUT THInGS //
	// Note:  \n gives a linebreak
	std::cout << ".\n";
	std::cout << "." << std::endl;


	//getline operator
	std::string mystr;
	std::cout << "What's your name? ";
	getline(std::cin, mystr);
	std::cout << "Hello " << mystr << std::endl;
	std::cout << "What is your favorite team? " << std::endl;
	getline(std::cin, mystr);
	std::cout << "I like " << mystr << " too!" << std::endl;



	std::cin >> q;

}
