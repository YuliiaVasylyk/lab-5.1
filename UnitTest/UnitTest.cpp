#include "pch.h"
#include "CppUnitTest.h"
#include "..\laab-5.1\Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double f=k(0,1);
			Assert::AreEqual(1., f);
		}
	};
}
