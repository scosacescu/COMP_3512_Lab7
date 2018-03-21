#pragma once
#include <vector>

#include <iostream>

using namespace std;


// wasn't sure what to do with these functions since a class isn't
// exactly needed, so i read about this:
// https://google.github.io/styleguide/cppguide.html#Nonmember,_Static_Member,_and_Global_Functions
// would just a namsepace be a better choice?

class VectorUtils {

public:
	VectorUtils() {}

	int sum(const std::vector<int>& v) {
		int elementsum{ 0 };
		for (auto& n : v) {
			elementsum += n;
		}
		cout << "the sum of your vector's elements is: " << elementsum << endl;
		return elementsum;
	}

	int max(const std::vector<int>& v) {
		int max = v[0];

		for (vector<int>::const_iterator it = v.begin() + 1; it != v.end(); ++it) {
			if (*it > max) {
				max = *it;
			}
		}
		std::cout << "The largest element in your vector is: " << max << std::endl;
		return max;
	}

	double average(const std::vector<int>& v) {
		double intermediateSum{ 0 };
		double average{ 0.00 };
		for (auto& n : v) {
			intermediateSum += n;
		}
		average = (intermediateSum / v.size());
		cout << "The average value of your vector is: " << average << endl;
		return average;
	}

};