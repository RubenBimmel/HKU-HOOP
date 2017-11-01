// ProducerConsumer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <queue>
#include <thread>
#include <condition_variable>
#include <iostream>

int c = 0;
bool done = false;
std::queue<int> goods;

std::condition_variable flag;
std::mutex mutex;

void producer() {
	for (int i = 0; i < 500; ++i) {
		mutex.lock();
		
		goods.push(i);
		c++;
		
		mutex.unlock();
		flag.notify_one();
	}
	done = true;
}

void consumer() {
	std::unique_lock<std::mutex> lock(mutex);
	while (!done) {
		flag.wait(lock);

		while (!goods.empty()) {
			goods.pop();
			c--;
		}
	}
}

int main() {
	std::thread consumerThread(consumer);
	std::thread producerThread(producer);

	consumerThread.join();
	producerThread.join();
	std::cout << "Net: " << c << std::endl;

	return 0;
}