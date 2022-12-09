#include "pch.h"
#include "CppUnitTest.h"
#include "../5.4/5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace unit54
{
	TEST_CLASS(unit54)
	{
	public:
		

		TEST_METHOD(TestMethod1)
		{
			S0(1, 1);
			S1(1, 1, 1);
			S2(1, 1, 1);
			S3(1, 1, 1, 0);
			S4(1, 1, 1, 0);
		}
	};
}
