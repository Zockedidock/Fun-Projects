#pragma once
#include <iostream>
#include <vector>

namespace most {
	auto getPandigitalNums(int base)->std::vector<long int>;
	float Q_sqrt(float number);
	void stringToASCII(const char* string);

	void print(std::string p) { std::cout << p << std::endl; }
	void print(int p) { std::cout << p << std::endl; }
	void print(int p[]) { std::cout << p << std::endl; }
	void print(double p) { std::cout << p << std::endl; }
	void print(float p) { std::cout << p << std::endl; }
	void print(char p) { std::cout << p; }
	void print(const char* p) { std::cout << p << std::endl; }
	void print(unsigned long long p) { std::cout << p << std::endl; }
	void print(unsigned long p) { std::cout << p << std::endl; }
	void print(long long p) { std::cout << p << std::endl; }
	void print(long p) { std::cout << p << std::endl; }
}

