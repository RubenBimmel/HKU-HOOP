#pragma once

#include <string>
#include <type_traits>
#include <iostream>
#include <vector>

class SortArray
{
public:
	template<class T> static std::vector<T> sort(std::vector<T> input);

private:

};

template<class T>
inline std::vector<T> SortArray::sort(std::vector<T> input)
{
	std::vector<T> output = input;
	if (true) {
		int i = 1;
		while (i < output.size()) {
			if (output.at(i) < output.at(i-1)) {
				T lowest = output.at(i);
				output.at(i) = output.at(i-1);
				output.at(i-1) = lowest;
				if (i > 1) {
					i--;
				}
			}
			else {
				i++;
			}
		}
	}
	return output;
}
