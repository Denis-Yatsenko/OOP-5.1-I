#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP_5.1I/DigitString.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			DigitString ds;
			ds.Init("10");
			Assert::AreEqual("10", ds.toString().c_str());
		}
	};
}
