#include "CppUnitTest.h"
#include "../Lab7/VectorUtils.hpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace vectorUtils;

namespace VectorUnitTests
{		
	// Unit tests for int sum(const std::vector<int>& v)
	TEST_CLASS(UnitTestSum) {
	public:
		TEST_METHOD(SumPass)
		{
			//Arrange
			std::vector<int> vecSum1{ 5,4,3,2,1 };
			int sum{0};
			//Act
			sum = vectorUtils::sum(vecSum1);
			//Assert
			Assert::AreEqual(15, sum);

		}

		TEST_METHOD(SumEmpty)
		{
			//Arrange
			std::vector<int> vecSum2{};
			int sum{0};
			//Act
			sum = vectorUtils::sum(vecSum2);
			//Assert
			Assert::AreEqual(0, sum);
		}
	};
	
	// Unit tests for int min(const std::vector<int>& v)
	TEST_CLASS(UnitTestMin)
	{
	public:
		
		TEST_METHOD(MinRepeatPass)
		{
			//Arrange
			std::vector<int> vecMin1{ 0, 2, 0, 6, 5 };
			int min{0};
			//Act
			min = vectorUtils::min(vecMin1);
			//Assert
			Assert::AreEqual(0, min);
		}
		
		TEST_METHOD(MinPass)
		{
			//Arrange
			std::vector<int> vecMin2{ 5, 2, 8, 6, 5 };
			int min{0};
			//Act
			min = vectorUtils::min(vecMin2);
			//Assert
			Assert::AreEqual(2, min);
		}
		
		TEST_METHOD(MinEmpty)
		{
			//Arrange
			std::vector<int> vecMin3{};
			int min{0};
			//Act
			min = vectorUtils::min(vecMin3);
			//Assert
			Assert::AreEqual(0, min);
		}
	};

	// Unit tests forint max(const std::vector<int>& v)
	TEST_CLASS(UnitTestMax) {
	public:
		TEST_METHOD(MaxEmpty)
		{
			//Arrange
			std::vector<int> vecMax1{};
			int max{0};
			//Act
			max = vectorUtils::max(vecMax1);
			//Assert
			Assert::AreEqual(0, max);
		}

		TEST_METHOD(MaxPass)
		{
			//Arrange
			std::vector<int> vecMax2{7, 8, 9, 10, 10};
			int max{0};
			//Act
			max = vectorUtils::max(vecMax2);
			//Assert
			Assert::AreEqual(10, max);
		}
	};

	// Unit tests for int average(const std::vector<int>& v)
	TEST_CLASS(UnitTestAvg) {
	public:
		TEST_METHOD(AvgPass)
		{
			//Arrange
			std::vector<int> vecAvg1{ 7, 8, 9, 10, 10 };
			double avg{ 0 };
			//Act
			avg = vectorUtils::average(vecAvg1);
			//Assert
			Assert::AreEqual(8.800, avg);
		}

		TEST_METHOD(AvgEmpty)
		{
			//Arrange
			std::vector<int> vecAvg2{};
			double avg{ 0 };
			//Act
			avg = vectorUtils::average(vecAvg2);
			//Assert
			Assert::AreEqual(0.0, avg);
		}
	};
}