
#include <vector>
#include <iostream>
#include "VectorUtils.cpp"

using namespace std;

int main() {
	std::vector<int> ints{10, 20, 30, 40, 20, 5};
	std::vector<int> ints2{ 5, 5, 5, 10, 6, 0 };

	VectorUtils vu;
	vu.sum(ints);
	vu.max(ints);
	vu.average(ints);

	vu.sum(ints2);
	vu.max(ints2);
	vu.average(ints2);

	cin.get();
}
