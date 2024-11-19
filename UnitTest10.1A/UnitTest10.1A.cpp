#include "pch.h"
#include "CppUnitTest.h"
#include "../laboratory10.1/lab10.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest101A
{
	TEST_CLASS(UnitTest101A)
	{
	public:
		
		TEST_METHOD(TestPhisicFine)
		{
			const int N = 3;
			Student students[N] = {
				{"��������", 1, KN, 4, 5, 5},
				{"��������", 2, PZ, 3, 4, 5},
				{"���������", 3, IT, 5, 5, 5}
			};

			int result = PhisicFine(students, N);

			Assert::AreEqual(2, result);
		}
	};
}
