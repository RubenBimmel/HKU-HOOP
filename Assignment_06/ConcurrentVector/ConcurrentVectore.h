#pragma once

#include <vector>
#include <mutex>

std::mutex mutex;

template<typename T> class ConcurrentVector
{
public:
	void push_back(T object);
	void pop_back();
	bool empty();

private:
	std::vector<T> vector;
};

template<typename T>
inline void ConcurrentVector<T>::push_back(T object)
{
	mutex.lock();
	vector.push_back(object);
	mutex.unlock();
}

template<typename T>
inline void ConcurrentVector<T>::pop_back()
{
	mutex.lock();
	vector.pop_back();
	mutex.unlock();
}

template<typename T>
inline bool ConcurrentVector<T>::empty()
{
	return vector.empty();
}
