#include "VectorUtils.hpp"
using namespace std;


// COMP 3512 Lab 7
// Winter 2018
// Created by Stephanie Cosacescu A00977073
int main() {
	std::vector<int> ints{10, 20, 30, 40, 20, 5};
	std::vector<int> ints2{ 5, 5, 5, 10, 6, 0 };
	std::vector<int> oneElement{ 7 };
	std::vector<int>empty;


	vectorUtils::sum(ints);
	vectorUtils::min(ints);
	vectorUtils::max(ints);
	vectorUtils::average(ints);

	
	vectorUtils::max(empty);
	vectorUtils::sum(empty);
	vectorUtils::min(empty);
	vectorUtils::average(empty);



	cin.get();
}
