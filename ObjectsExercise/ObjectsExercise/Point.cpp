#include "Point.h"

//Constructors

Point::Point()
	: mX(new float (0.0f)), mY(new float(0.0f)), mZ(new float(0.0f))
{
}

Point::Point(float x, float y, float z)
	: mX(new float(x)), mY(new float (y)), mZ(new float(z))
{
}

Point::Point(const Point& p)
	: mX(new float (*p.mX)), mY(new float (*p.mY)), mZ(new float (*p.mZ))
{
}

//Destructor
Point::~Point()
{
	delete mX;
	delete mY;
	delete mZ;
}

//Getters
float Point::getX()
{
	return *mX;
}

float Point::getY()
{
	return *mY;
}

float Point::getZ()
{
	return *mZ;
}

//Setters
void Point::setX(float x)
{
	mX = new float(x);
}

void Point::setY(float y)
{
	mY = new float(y);
}

void Point::setZ(float z)
{
	mZ = new float(z);
}