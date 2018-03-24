#include "VectorUtils.hpp"
using namespace std;


// COMP 3512 Lab 7
// Winter 2018
// Created by Stephanie Cosacescu A00977073
int main() {
	std::vector<int> ints{10, 20, 30, 40, 20, 5};
	std::vector<int> ints2{ 5, 5, 5, 10, 6, 0 };
	std::vector<int> oneElement{ 7 };
	std::vector<int> empty;

	//Test for normal input
	vectorUtils::sum(ints);
	vectorUtils::min(ints);
	vectorUtils::max(ints);
	vectorUtils::average(ints);

	vectorUtils::sum(ints2);
	vectorUtils::min(ints2);
	vectorUtils::max(ints2);
	vectorUtils::average(ints2);

	//Test for empty vectors
	vectorUtils::sum(empty);
	vectorUtils::min(empty);
	vectorUtils::max(empty);
	vectorUtils::average(empty);

	cin.get();
}
