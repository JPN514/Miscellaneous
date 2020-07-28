// OO_practice_2019.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> // header for preprocessor
#include<string>
#include <sstream>
using namespace std; // allows us to drop std prefix 


class Rectangle {
	int height, width;
public:
	Rectangle(int, int); // constructor
	void setvalues(int, int);
	int area() {return height*width;} // empty brackets as no parameters.

};

Rectangle::Rectangle(int a, int b) {
	width = a;
	height = b;
} 

void Rectangle::setvalues(int x, int y) {
	width = x;
	height = y;
}

class Circle {
	int radius;
	const double pi = 3.14159;
public:
	void setradius(int);
	double area() { return pi*radius*radius; }
	double circum() { return 2 * pi*radius; }
};

void Circle::setradius(int x) {
	radius = x;
}


int main()
{
	Rectangle rect1(5,6), rect2(8,9); //declares an object of class Rectangle using the constructor 
	//rect1.setvalues(5, 6); both use the function declared earlier which does the same job as the constructor
	//rect2.setvalues(8, 9);
	std::cout << "Area of rectangle 1 is: " << rect1.area() << endl << endl;
	std::cout << "Area of rectangle 2 is: " << rect2.area() << endl << endl;

	Circle circle1, circle2; //declares an object of class Circle
	circle1.setradius(2);
	circle2.setradius(5);
	std::cout << "Area of circle 1 is: " << circle1.area() << endl << endl;
	std::cout << "Circumference of circle 1 is: " << circle1.circum() << endl << endl;
	std::cout << "Area of circle 2 is: " << circle2.area() << endl << endl;
	std::cout << "Circumference of circle 2 is: " << circle2.circum() << endl << endl;



	cin.get(); // pauses console.
    return 0;
}

