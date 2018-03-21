#pragma once
#include <vector>
#include <iostream>

// All util methods simply extracted as globals into a namespace as per:
// https://google.github.io/styleguide/cppguide.html#Nonmember,_Static_Member,_and_Global_Functions


namespace vectorUtils {


	inline int sum(const std::vector<int>& v) {
		
		if (!v.empty()) {
			int elementsum = v[0];
			for (std::vector<int>::const_iterator it = v.begin() + 1; it != v.end(); ++it) {
				elementsum += *it;
			}
			std::cout << "the sum of your vector's elements is: " << elementsum << std::endl;
			return elementsum;
		} 
		else {
			std::cout << "Cannot find the sum of an empty vector" << std::endl;
			return 0;
		}
	}

	inline int max(const std::vector<int>& v) {
		
		if (!v.empty()) {
			int max = v[0];
			for (std::vector<int>::const_iterator it = v.begin() + 1; it != v.end(); ++it) {
				if (*it > max) {
					max = *it;
				}
			}
			std::cout << "The largest element in your vector is: " << max << std::endl;
			return max;
		}
		else {
			std::cout << "Cannot find the max of an empty vector" << std::endl;
			return 0;
			//throw std::invalid_argument("cannot find the max of an empty vector");
		}
	}

	inline int min(const std::vector<int>& v) {

		if (!v.empty()) {
			int min = v[0];
			for (std::vector<int>::const_iterator it = v.begin() + 1; it != v.end(); ++it) {
				if (*it < min) {
					min = *it;
				}
			}
			std::cout << "The smallest element in your vector is: " << min << std::endl;
			return min;
		}
		else {
			std::cout << "Cannot find the min of an empty vector" << std::endl;
			return 0;
		}
	}

	inline double average(const std::vector<int>& v) {
		if (!v.empty()) {
			double intermediateSum{ 0 };
			double average{ 0.00 };

			for (auto& n : v) {
				intermediateSum += n;
			}
			average = (intermediateSum / v.size());
			std::cout << "The average value of your vector is: " << average << std::endl;
			return average;
		}
		else{
			std::cout << "Cannot find the average of an empty vector" << std::endl;
			return 0;
		}
	}

}