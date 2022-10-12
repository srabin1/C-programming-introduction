#include<stdio.h>
#include<stdlib.h>
#include<math.h>


struct Rectangle {

	int length;
	int breadth;
};
int main() {

	//create an array inside of heap
	//dynamic allocation
	int* p;
	char* p2;
	float* p3;
	double* p4;
	struct Rectangle* p5;

	p = (int*)malloc(5 * sizeof(int));
	//c++ version: p = new int [5];
	p[0] = 10, p[1] = 15; p[2] = 14; p[3] = 21; p[4] = 31;
	for (int i = 0; i < 5; i++)
		printf("%d\n", p[i]);
	//every pointers size is 8 byte for whatever data type
	printf("size of pointer is: %d\n", sizeof(p));
	printf("size of pointer is: %d\n", sizeof(p2));
	printf("size of pointer is: %d\n", sizeof(p3));
	printf("size of pointer is: %d\n", sizeof(p4));
	printf("size of pointer is: %d\n", sizeof(p5));
	free(p);//deallocating memory
	//c++ version: delete [] p;
	return 0;

}