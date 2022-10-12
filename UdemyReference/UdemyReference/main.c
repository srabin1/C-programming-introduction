#include<stdlib.h>
#include<stdio.h>
#include<math.h>

struct Rectangle {
	int length;
	int breadth;

};


int main() {
	struct Rectangle r = { 10,5 };
	//r.length =15;

	//create a pointer to struct in Stack
	struct Rectangle* p = &r;
	p->length = 15;
	//I can't say p.length=15 but I can either say (*p).length=15 or p-> length =15; 
	printf("Length of Rectangle is: %d\n", p->length);
	printf("Length of Rectangle is: %d\n", (*p).length);


	//create a pointer to struct in Heap
	
	//malloc function return a void pointer and I have to type cast it like
	// (struct Rectangle *)malloc (sizeof (struct Rectangle));
	//(int*)malloc(5 * sizeof(int));
	struct Rectangle* p1;
	p1 = (struct Rectangle*)malloc(sizeof(struct Rectangle));
	p1->length = 10;
	printf("Length of Rectangle is: %d\n", p1->length);

	return 0;
}

//this feature works in C++ but not C
	/*int a = 10;
	int& r = a;

	cout<< a << endl;
	cout<< &r << endl;
	*/

	//pointer to structure
