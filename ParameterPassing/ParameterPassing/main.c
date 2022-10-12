#include<stdlib.h>
#include<stdio.h>
#include<math.h>

//1. call by value
int add(int a, int b) {

	int result;
	result = a + b;
	return result;
}
//call by address (pointer), mostly is used when our function doesn't return anything (void)
void swap(int* x, int* y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;

}
int main() {
	//call by value
	int num1 = 10, num2 = 15, sum;
	sum = add(num1, num2);
	printf("Sum is: %d\n", sum);


	//call by address
	int n1 = 12, n2 = 14;
	swap(&n1, &n2);
	printf("first number: %d\n", n1);
	printf("second number: %d", n2);
	

	return 0;
}