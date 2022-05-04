#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\LEGION\source\repos\Lab_oop_3.3F\Lab_oop_3.3F\FractionPublic.cpp"
#include "C:\Users\LEGION\source\repos\Lab_oop_3.3F\Lab_oop_3.3F\FractionPrivate.cpp"
#include "C:\Users\LEGION\source\repos\Lab_oop_3.3F\Lab_oop_3.3F\LongLong.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UTOOP33F
{
	TEST_CLASS(UTOOP33F)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			LongLong g(6, 6), g1(6, 6);

			Assert::AreEqual(operator==(g, g1), true);
		}
	};
}