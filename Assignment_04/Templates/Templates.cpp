// Templates.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "SortArray.h"
#include "Queue.h"

#include <iostream>
#include <string>
#include <vector>

template<class T> void printVector(std::vector<T> vector, std::string name) {
	std::cout << name << ":" << std::endl << vector.at(0);
	for (int i = 1; i < vector.size(); i++) {
		std::cout << ", " << vector.at(i);
	}
	std::cout << std::endl << std::endl;
}

int main()
{
	std::vector<int> integers = { 1, 4, 2, 5, 1 };
	
	printVector(integers, "integers");

	integers = SortArray::sort(integers);
	
	printVector(integers, "integers");

	std::vector<std::string> strings = { "alpha", "beta", "gamma", "delta", "epsilon", "zeta", "eta" };

	printVector(strings, "strings");

	strings = SortArray::sort(strings);

	printVector(strings, "strings");

	Queue<int> newQueue;
	newQueue.put(0);
	newQueue.print();
	newQueue.put(6);
	newQueue.print();
	newQueue.put(2);
	newQueue.print();
	newQueue.get();
	newQueue.print();
	newQueue.put(5);
	newQueue.print();
	std::cout << "queue size: " << newQueue.size();


	return 0;
}

