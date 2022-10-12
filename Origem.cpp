// Pavic Multithreading C++ - 2022

// std::cout / printf!!
#include<iostream>

// create Threads
#include<thread>


//using namespace std; // Removed std::

void Lucas() {
	printf("Lucas threads \n");
}

void call_from_thread() {
	std::cout << "Hello, World from Thread" << std::endl;
}

// Code Main

int main() {

	// Launch a thread

	std::thread t1(call_from_thread);
	std::thread lucas(Lucas);

	std::cout << "Hello, World from CPU" << std::endl;

	lucas.join();
	t1.join();
	std::cout << "Hello, World from CPU - after Join" << std::endl;

	return 0;

}