#pragma once

#include <vector>
#include <iostream>

template<typename T> class Queue
{
public:
	void put(T object);
	T get();
	int size();
	void print();

private:
	std::vector<T> queue;
};

template<typename T>
inline void Queue<T>::put(T object)
{
	queue.push_back(object);
}

template<typename T>
T Queue<T>::get()
{
	T returnObject = queue.at(0);
	queue.erase(queue.begin());
	return returnObject;
}

template<typename T>
int Queue<T>::size()
{
	return queue.size();
}

template<typename T>
void Queue<T>::print()
{
	std::cout << "queue" << std::endl;
	if (queue.size() > 0) {
		std::cout << queue.at(0);
		for (int i = 1; i < queue.size(); i++) {
			std::cout << ", " << queue.at(i);
		}
		std::cout << std::endl;
	}
}