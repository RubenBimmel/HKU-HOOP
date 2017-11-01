// Main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ConcurrentVectore.h"
#include <vector>
#include <thread>
#include <iostream>

std::vector<int> vector;
ConcurrentVector<int> concurrentVector;

void popAndPushBackVector() {
	for (int i = 0; i < 500; i++) {
		vector.push_back(i);
		if (!vector.empty()) {
			vector.pop_back();
		}
	}
}

void popAndPushBackConcurrentVector() {
	for (int i = 0; i < 500; i++) {
		concurrentVector.push_back(i);
		if (!concurrentVector.empty()) {
			concurrentVector.pop_back();
		}
	}
}

int main()
{
	//std::thread thread1(popAndPushBackVector);
	//std::thread thread2(popAndPushBackVector);

	std::thread thread1(popAndPushBackConcurrentVector);
	std::thread thread2(popAndPushBackConcurrentVector);

	thread1.join();
	thread2.join();

	std::cout << vector.size();

	return 0;
}
