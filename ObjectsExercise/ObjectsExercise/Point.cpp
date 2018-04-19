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
const float Point::getX()
{
	return *mX;
}

const float Point::getY()
{
	return *mY;
}

const float Point::getZ()
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

//Assignment operator
Point& Point::operator= (const Point& p)
{
	if (this != &p)
	{
		swapMember(this->mX, p.mX);
		swapMember(this->mY, p.mY);
		swapMember(this->mZ, p.mZ);
	}

	return *this;
}

void Point::swapMember(float* thismem, float* newmem)
{
	if (thismem != nullptr && newmem != nullptr)
	{
		float* aux = thismem;
		thismem = newmem;
		newmem = thismem;
	}
}

//Operation functions

Point Point::getAddition(const Point& p)
{
	Point aux = Point(*this->mX + *p.mX, *this->mY + *p.mY, *this->mZ + *p.mZ);
	return aux;
}

const Point& Point::add(const Point& p)
{
	*mX += *p.mX;
	*mY += *p.mY;
	*mZ += *p.mZ;

	return *this;
}

Point Point::getSubstraction(const Point& p)
{
	Point aux = Point(*this->mX - *p.mX, *this->mY - *p.mY, *this->mZ - *p.mZ);
	return aux;
}

const Point& Point::substract(const Point& p)
{
	*mX -= *p.mX;
	*mY -= *p.mY;
	*mZ -= *p.mZ;

	return *this;
}

//float Point::distance(const Point& p)
//{
//
//}