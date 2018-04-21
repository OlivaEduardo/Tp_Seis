#include "Point.h"
#include <math.h>
#include <assert.h>

//Constructors

Point::Point()
	: mX(new float (0.0f)), mY(new float(0.0f)), mZ(new float(0.0f))
{
	assert(mX != nullptr && mY != nullptr && mZ != nullptr);
}

Point::Point(float x, float y, float z)
	: mX(new float(x)), mY(new float (y)), mZ(new float(z))
{
	assert(mX != nullptr && mY != nullptr && mZ != nullptr);
}

Point::Point(const Point& p)
{
	assert(p.mX != nullptr && p.mY != nullptr && p.mZ != nullptr);
	this->mX = new float(*p.mX);
	this->mY = new float(*p.mY);
	this->mZ = new float(*p.mZ);
	assert(mX != nullptr && mY != nullptr && mZ != nullptr);
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
	assert(mX != nullptr);
	return *mX;
}

const float Point::getY()
{
	assert(mY != nullptr);
	return *mY;
}

const float Point::getZ()
{
	assert(mZ != nullptr);
	return *mZ;
}

//Setters
void Point::setX(float x)
{
	mX = new float(x);
	assert(mX != nullptr);
}

void Point::setY(float y)
{
	mY = new float(y);
	assert(mY != nullptr);
}

void Point::setZ(float z)
{
	mZ = new float(z);
	assert(mZ != nullptr);
}

//Assignment operator
Point& Point::operator= (const Point& p)
{
	assert(mX != nullptr && mY != nullptr && mZ != nullptr);
	assert(p.mX != nullptr && p.mY != nullptr && p.mZ != nullptr);
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
	assert(thismem != nullptr && newmem != nullptr);
	float* aux = thismem;
	thismem = newmem;
	newmem = thismem;
}

//Operation functions

Point Point::getAddition(const Point& p)
{
	assert(mX != nullptr && mY != nullptr && mZ != nullptr);
	assert(p.mX != nullptr && p.mY != nullptr && p.mZ != nullptr);
	Point aux = Point(*this->mX + *p.mX, *this->mY + *p.mY, *this->mZ + *p.mZ);
	return aux;
}

const Point& Point::add(const Point& p)
{
	assert(p.mX != nullptr && p.mY != nullptr && p.mZ != nullptr);
	*mX += *p.mX;
	*mY += *p.mY;
	*mZ += *p.mZ;

	return *this;
}

Point Point::getSubstraction(const Point& p)
{
	assert(p.mX != nullptr && p.mY != nullptr && p.mZ != nullptr);
	Point aux = Point(*this->mX - *p.mX, *this->mY - *p.mY, *this->mZ - *p.mZ);
	return aux;
}

const Point& Point::substract(const Point& p)
{
	assert(p.mX != nullptr && p.mY != nullptr && p.mZ != nullptr);

	*mX -= *p.mX;
	*mY -= *p.mY;
	*mZ -= *p.mZ;

	return *this;
}

float Point::distance(const Point& p)
{
	assert(mX != nullptr && mY != nullptr && mZ != nullptr);
	assert(p.mX != nullptr && p.mY != nullptr && p.mZ != nullptr);
	return sqrtf(((mX - p.mX) * (mX - p.mX)) + ((mY - p.mY) * (mY - p.mY)) + ((mZ - p.mZ) * (mZ - p.mZ)));
}