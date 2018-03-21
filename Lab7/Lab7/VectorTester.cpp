#include <vector>
#include <iostream>

using namespace std;

int main() {
	std::vector<int> ints;

	ints.push_back(10);
	ints.push_back(20);
	ints.push_back(30);
	ints.push_back(40);
	ints.push_back(20);
	ints.push_back(5);

	//sum
	int sum_of_elems{ 0 };
	for (auto& n : ints) {
		sum_of_elems += n;
	}

	std::cout << "sum called: " << sum_of_elems << std::endl;
	//endsum



	//max
	int max = ints[0];
	int maxIndex{ 0 };
	vector<int>::iterator it;
	for (it = ints.begin() + 1; it!= ints.end(); ++it) {
		if (*it > max) {
			max = *it;
		}
	}
	std::cout << "max called: value " << max << "at index "<< maxIndex<< std::endl;
	//end max

	//average
	double intermediateSum{ 0 };
	double average{ 0 };
	for (auto& n : ints) {
		intermediateSum += n;
	}
	average = (intermediateSum / ints.size());
	cout << "average called" << average << endl;



	cin.get();
	
}
//static int sum(const std::vector<int>& v) {
//	//return sum of elements in the vector
//}

//static int max(const std::vector<int>& v) {
//	//return element with max value
//	return max;
//}


//static int min(const std::vector<int>& v) {
//	//return element with min value
//	return 0;
//}

//static double average(const std::vector<int>& v) {
//	//return average of elements
//	return 0;
//}