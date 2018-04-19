//Objects Excercise

#include <iostream>
#include "MathUtils.h"


int main() {

	Point p1 = Point();

	std::cout << "p1X: " << p1.getX() << "\np1Y: " << p1.getY() << "\np1Z: " << p1.getZ() << std::endl;

	p1.setX(20.47f);
	p1.setY(564.2121f);
	p1.setZ(51.587f);

	std::cout << "\np1X: " << p1.getX() << "\np1Y: " << p1.getY() << "\np1Z: " << p1.getZ() << std::endl;

	Point p2 = Point(47.69f, 87.98f, 896.54f);

	std::cout << "\np2X: " << p2.getX() << "\np2Y: " << p2.getY() << "\np2Z: " << p2.getZ() << std::endl;

	Point p3 = Point(p1);

	std::cout << "\np3X: " << p3.getX() << "\np3Y: " << p3.getY() << "\np3Z: " << p3.getZ() << std::endl;

	p2.add(p1);

	std::cout << "\np2X: " << p2.getX() << "\np2Y: " << p2.getY() << "\np2Z: " << p2.getZ() << std::endl;

	Point p4 = p1.getAddition(p3);

	std::cout << "\np4X: " << p4.getX() << "\np4Y: " << p4.getY() << "\np4Z: " << p4.getZ() << std::endl;

	int f;
	std::cin >> f;

	return 0;
}