#pragma once

#ifdef LIBRARY_EXPORTS
	#define LIBRARY_API __declspec(dllexport)
#else
	#define LIBRARY_API __declspec(dllimport)
#endif

namespace mockdll
{
	extern "C" LIBRARY_API float getProduct(float a, float b);

	extern "C" LIBRARY_API float getSum(float a, float b);

	class LIBRARY_API PrimeGenerator
	{

	public:
		PrimeGenerator(bool onlyMersenne_ = false) : onlyMersenne(onlyMersenne_) {}

		size_t getNthPrime(size_t i);

	private:

		bool isPrime(size_t i) const;
		bool isMersenne(size_t m) const;

		bool onlyMersenne = false;
	};
} // namespace mockdll
