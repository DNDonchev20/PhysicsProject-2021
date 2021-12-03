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

		TEST_METHOD(TestCalculateMassFunction)
		{
			float result;
			float expected;

			result = CalculateMass(6, 3);
			expected = 6 / 3;

			Assert::AreEqual(result, expected, L"Expected 2!");
		}

		TEST_METHOD(TestCalculateMassFunction)
		{
			float result;
			float expected;

			result = CalculateMass(8, 4);
			expected = 8 / 4;

			Assert::AreEqual(result, expected, L"Expected 2!");
		}

		TEST_METHOD(TestCalculateAccelerationFunction)
		{
			float result;
			float expected;

			result = CalculateAcceleration(8, 2);
			expected = (2 * 8) / (2 * 2);

			Assert::AreEqual(result, expected, L"Expected 4!");
		}

		TEST_METHOD(TestCalculateAccelerationFunction)
		{
			float result;
			float expected;

			result = CalculateAcceleration(16, 4);
			expected = (2 * 16) / (4 * 4);

			Assert::AreEqual(result, expected, L"Expected 2!");
		}

		TEST_METHOD(TestCalculateAccelerationFunction)
		{
			float result;
			float expected;

			result = CalculateAcceleration(4.5, 3);
			expected = (2 * 4.5) / (3 * 3);

			Assert::AreEqual(result, expected, L"Expected 1!");
		}
		
		TEST_METHOD(TestCalculateVolumeFunction)
		{
			float result;
			float expected;

			result = CalculateVolume(2.5, 3);
			expected = 3.14f * 2.5 * 2.5 * 3;

			Assert::AreEqual(result, expected, L"Expected 58,875!");
		}
		TEST_METHOD(TestCalculateVolumeFunction)
		{
			float result;
			float expected;

			result = CalculateVolume(5, 2);
			expected = 3.14f * 5 * 5 * 2;

			Assert::AreEqual(result, expected, L"Expected 157!");
		}
		TEST_METHOD(TestCalculateVolumeFunction)
		{
			float result;
			float expected;

			result = CalculateVolume(10, 4);
			expected = 3.14f * 10 * 10 * 4;

			Assert::AreEqual(result, expected, L"Expected 1256!");
		}
	};
}