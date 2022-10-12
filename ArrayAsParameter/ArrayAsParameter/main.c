#include<stdlib.h>
#include<stdio.h>
#include<math.h>

// this function will take an array
void fun(int A[]) {

	int array_size = sizeof(A) / sizeof(int);
	printf("%d\n", array_size);
}
void fun2(int *A, int n) {// or void fun2(int A[], int n)

	for (int i = 0; i < n; i++)
		printf("%d\n", A[i]);
}

// this function will return an array
int *fun3(int size) {
	int* p;
	p = (int*)malloc(size * sizeof(int));
	for (int i = 0; i < size; i++)
		p[i] = i + 1;
	return p;

}


int main() {
	int A[] = { 2,4,6,8,10 };
	int n = 5;

	int* ptr, size = 5;
	ptr = fun3(size);

	printf("size of array is: \n");
	fun(A);

	printf("Array elements in fun2 are: \n");
	fun2(A, n);

	printf("Array elements in main are: \n");
	for (int i = 0; i < 5; i++)
		printf("%d\n", A[i]);

	printf("Array elements in fun3 are: \n");
	for (int i = 0; i < size; i++)
		printf("%d ", ptr[i]);

	return 0;

}