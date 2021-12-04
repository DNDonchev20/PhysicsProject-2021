#include "pch.h"
#include "CppUnitTest.h"
#include "../PhysicsTech/PhysicsTech-Functions.cpp"

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

			result = calculateMass(6, 2);
			expected = 6 / 2;

			Assert::AreEqual(result, expected, L"Expected 3!");
		}

		TEST_METHOD(TestCalculateMassFunctionTwo)
		{
			float result;
			float expected;

			result = calculateMass(6, 3);
			expected = 6 / 3;

			Assert::AreEqual(result, expected, L"Expected 2!");
		}

		TEST_METHOD(TestCalculateMassFunctionThree)
		{
			float result;
			float expected;

			result = calculateMass(8, 4);
			expected = 8 / 4;

			Assert::AreEqual(result, expected, L"Expected 2!");
		}

		TEST_METHOD(TestCalculateAccelerationFunction)
		{
			float result;
			float expected;

			result = calculateAcceleration(8, 2);
			expected = (2 * 8) / (2 * 2);

			Assert::AreEqual(result, expected, L"Expected 4!");
		}

		TEST_METHOD(TestCalculateAccelerationFunctionTwo)
		{
			float result;
			float expected;

			result = calculateAcceleration(16, 4);
			expected = (2 * 16) / (4 * 4);

			Assert::AreEqual(result, expected, L"Expected 2!");
		}

		TEST_METHOD(TestCalculateAccelerationFunctionThree)
		{
			float result;
			float expected;

			result = calculateAcceleration(4.5, 3);
			expected = (2 * 4.5) / (3 * 3);

			Assert::AreEqual(result, expected, L"Expected 1!");
		}
		
		TEST_METHOD(TestCalculateVolumeFunction)
		{
			float result;
			float expected;

			result = calculateVolume(2.5, 3);
			expected = 3.14f * 2.5 * 2.5 * 3;

			Assert::AreEqual(result, expected, L"Expected 58,875!");
		}
		TEST_METHOD(TestCalculateVolumeFunctionTwo)
		{
			float result;
			float expected;

			result = calculateVolume(5, 2);
			expected = 3.14f * 5 * 5 * 2;

			Assert::AreEqual(result, expected, L"Expected 157!");
		}
		TEST_METHOD(TestCalculateVolumeFunctionThree)
		{
			float result;
			float expected;

			result = calculateVolume(10, 4);
			expected = 3.14f * 10 * 10 * 4;

			Assert::AreEqual(result, expected, L"Expected 1256!");
		}
	};
}