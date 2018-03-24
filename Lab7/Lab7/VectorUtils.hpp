#pragma once
#include <vector>
#include <iostream>
#include <ios>
#include <iomanip>

// All util methods simply extracted as globals into a namespace as per:
// https://google.github.io/styleguide/cppguide.html#Nonmember,_Static_Member,_and_Global_Functions
namespace vectorUtils {

	//Calculate the sum of all elements in a vector of ints
	//PRE: A vector - empty or otherwise
	//POST: The sum will be displayed as well as returned
	//NB: Sums too large will overflow and wrap to negative
	inline int sum(const std::vector<int>& v) {
		
		if (!v.empty()) {
			//Pre-assign sum to 0'th index and loop through one less element
			int elementsum = v[0];
			for (std::vector<int>::const_iterator it = v.begin() + 1; it != v.end(); ++it) {
				elementsum += *it;
			}
			std::cout.precision(3);
			std::cout << "The sum of your vector's elements is: " << elementsum << std::endl;
			return elementsum;
		} 
		else {
			std::cout << "Cannot find the sum of an empty vector" << std::endl;
			return 0;
		}
	}

	//Find the largest element in a vector of ints
	//PRE: A vector - empty or otherwise
	//POST: The largest value (not the index storing it) will be displayed and returned
	inline int max(const std::vector<int>& v) {
		
		if (!v.empty()) {
			//Pre-assign max to 0'th index and loop through one less element
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

	// Find the smallest element in a vector of ints
	//PRE: A vector - empty or otherwise
	//POST: The smallest value will be displayed and returned
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

	//Find the MEAN average of all elements in a vector of ints
	//PRE: 
	inline double average(const std::vector<int>& v) {
		if (!v.empty()) {
			double average{ 0.000 };			
			double intermediateSum{ 0.000 };

			for (auto& n : v) {
				intermediateSum += n;
			}
			average = (intermediateSum / v.size());
			std::cout << "The average value of your vector is: " << std::setprecision(3) <<std::fixed << average << std::endl;
			return average;
		}
		else{
			std::cout << "Cannot find the average of an empty vector" << std::endl;
			return 0;
		}
	}

}