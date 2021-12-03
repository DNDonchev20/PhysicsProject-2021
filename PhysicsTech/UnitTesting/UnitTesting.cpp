#include "pch.h"
#include "CppUnitTest.h"
#include "../PhysicsTech/PhysicsTech-Functions.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTesting
{
	TEST_CLASS(UnitTesting)
	{
	public:

		TEST_METHOD(TestCalculateMassFunction)
		{
			float result;
			float expected;

			result = CalculateMass(6, 2);
			expected = 6 / 2;

			Assert::AreEqual(result, expected, L"Expected 3!");
		}

		TEST_METHOD(TestCalculateAccelerationFunction)
		{
			float result;
			float expected;

			result = CalculateAcceleration(4.5, 3);
			expected = (2 * 4.5) / (3 * 3);

			Assert::AreEqual(result, expected, L"Expected 1!");
		}
	};
}