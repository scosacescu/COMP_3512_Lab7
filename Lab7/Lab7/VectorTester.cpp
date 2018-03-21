#include "VectorUtils.hpp"

using namespace std;

int main() {
	std::vector<int> ints{10, 20, 30, 40, 20, 5};
	std::vector<int> ints2{ 5, 5, 5, 10, 6, 0 };
	std::vector<int>empty;


	vectorUtils::sum(ints);
	vectorUtils::sum(ints2);
	vectorUtils::max(ints);
	vectorUtils::average(ints);
	vectorUtils::min(ints);
	
	vectorUtils::max(empty);
	vectorUtils::sum(empty);
	vectorUtils::min(empty);
	vectorUtils::average(empty);



	cin.get();
}
