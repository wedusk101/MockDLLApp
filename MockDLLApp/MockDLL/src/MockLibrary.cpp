#include "MockLibrary.h"

namespace mockdll
{
	float getProduct(float a, float b)
	{
		return a * b;
	}

	float getSum(float a, float b)
	{
		return a + b;
	}
} // namespace mockdll