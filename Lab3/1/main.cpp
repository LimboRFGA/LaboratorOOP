#include "Math.cpp"

int main() {
	Math test;
	
	printf("%d\n", test.Add(1, 2));
	printf("%d\n", test.Add(1, 2, 3));
	printf("%d\n", test.Add(1.50, 1.25));
	printf("%d\n", test.Add(1.50, 1.10, 1.20));

	printf("%d\n", test.Mul(1, 2));
	printf("%d\n", test.Mul(1, 2, 3));
	printf("%d\n", test.Mul(1.50, 1.25));
	printf("%d\n", test.Mul(1.50, 1.10, 1.20));

	printf("%d\n", test.Add(5, 1, 2, 3, 4, 5));
	printf("%d\n", test.Add("Radu", "Gabriel"));

	return 0;
}