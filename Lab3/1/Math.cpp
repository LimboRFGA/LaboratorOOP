#include "Math.h"
#include <cstdarg>
#include <cstring>
#include <cstdlib>
#include <cstdio>

int Math::Add(int a, int b) { return a + b; }
int Math::Add(int a, int b, int c) { return a + b + c; }
double Math::Add(double a, double b) { return a + b; }
double Math::Add(double a, double b, double c) { return a + b + c; }

int Math::Mul(int a, int b) { return a * b; }
int Math::Mul(int a, int b, int c) { return a * b * c; }
double Math::Mul(double a, double b) { return a * b; }
double Math::Mul(double a, double b, double c) { return a * b * c; }

int Math::Add(int count, ...) {
	int sum = 0;

	std::va_list args;
	va_start(args, count);
	
	for (int i = 0; i < count; ++i)
		sum += va_arg(args, int);
	
	va_end(args);

	return sum;
}

char* Math::Add(const char* a, const char* b) {
	if (a == nullptr || b == nullptr) return nullptr;

	int x = atoi(a);
	int y = atoi(b);
	int sum = x + y, length = snprintf(nullptr, 0, "%d", sum) + 1;
	// Using the dry run feature of snprintf, we print a nullptr with a max size of 0
	// which causes it to return number of character it would need to print sum
	char* result = new char[length];
	snprintf(result, length, "%d", sum);

	return result;
}