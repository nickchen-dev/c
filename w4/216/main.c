#include "arithmetic.h"

int main() {
	int number1 = 10;
	int number2 = 20;

	printf("addition is %d\n", add(number1, number2));
	printf("subtraction is %d\n", subtract(number1, number2));
	printf("multiplication is %d\n", multiply(number1, number2));
	printf("divide is %d\n", divide(number1, number2));

	return 0;
}
