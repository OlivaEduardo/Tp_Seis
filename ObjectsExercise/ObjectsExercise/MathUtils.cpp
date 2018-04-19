
//Compare if both float variables are within an acceptable range
bool areEquals(float a, float b)
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