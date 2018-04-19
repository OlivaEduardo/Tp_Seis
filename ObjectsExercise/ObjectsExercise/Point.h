#ifndef CLASS_POINT
#define CLASS_POINT

class Point
{
private:
	float* mX;
	float* mY;
	float* mZ;

	void swapMember(float* thismem, float* newmem);
public:

	//Constructors
	Point();
	Point(const float x, const float y, const float z);
	Point(const Point &p);

	//Destructor
	~Point();

	//Getters
	const float getX();
	const float getY();
	const float getZ();

	//Setters
	void setX(const float x);
	void setY(const float y);
	void setZ(const float z);

	//Assignment operator overload
	Point& operator= (const Point& p);

	//Operation Functions
	Point getAddition(const Point&p);
	const Point& add(const Point& p);
	Point getSubstraction(const Point& p);
	const Point& substract(const Point& p);

	float distance(const Point& p);

};

#endif // !CLASS_POINT