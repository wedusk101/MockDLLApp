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

	bool PrimeGenerator::isMersenne(size_t m) const
	{
		size_t var = 0, exp = 1, base = 2;

		while (var <= (m + 1)) // M = (2^exp) - 1 => 2<<exp = (M + 1)
		{
			var = base << exp;
			if (var == (m + 1)) // follows from the definition of a Mersenne prime
				return true;

			exp++;
		}

		return false;
	}

	bool PrimeGenerator::isPrime(size_t n) const
	{
		size_t i = 0;

		if (n <= 1)
			return false;
		else
			for (i = 2; i * i <= n; i++)
				if(n % i == 0)
					return false;
			
		return true;
	}

	size_t PrimeGenerator::getNthPrime(size_t num)
	{
		size_t count = 1, i = 1, result = 0;
		
		while (count != num)
		{
			if (isPrime(i))
			{
				if (onlyMersenne)
				{
					if (isMersenne(i))
						result = i;
					else
						result = 0;
				}
				else
					result = i;

				++count;
			}

			++i;
		}

		return result;
	}
} // namespace mockdll