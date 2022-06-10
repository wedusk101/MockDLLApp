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
} // namespace mockdll
