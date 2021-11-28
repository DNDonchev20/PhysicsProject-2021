#include "pch.h"
#include "CppUnitTest.h"
#include "../PhysicsTech/PhysicsTech-Functions.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTesting
{
	TEST_CLASS(UnitTesting)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			float result;
			float expected;

			result = CalculateMass(6, 2);
			expected = 6 / 2;

			Assert::AreEqual(result, expected, L"Expected 3!");
		}
	};
}
