#ifndef CLASS_POINT
#define CLASS_POINT

class Point
{
private:
	float* mX;
	float* mY;
	float* mZ;
public:

	//Constructors
	Point();
	Point(const float x, const float y, const float z);
	Point(const Point &p);

	//Destructor
	~Point();

	//Getters
	float getX();
	float getY();
	float getZ();

	//Setters
	void setX(const float x);
	void setY(const float y);
	void setZ(const float z);

	//Operation Functions
	Point getAddition(const Point&p);
	const Point& add(const Point& p);
	Point getSubstraction(const Point& p);
	const Point& substract(const Point& p);

	float distance(const Point& p);

	//Assignment operator overload

};

#endif // !CLASS_POINT