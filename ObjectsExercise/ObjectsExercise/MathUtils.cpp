#include "MathUtils.h"

//Compare if both float variables are within an acceptable range
bool cpp_math::areEquals(float a, float b)
{
	if ((a-b) >= -0.00001 && (a-b) <= 0.00001)
	{
		return true;
	}
	else
	{
		return false;
	}
}