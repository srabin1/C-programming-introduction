#include<stdlib.h>
#include<stdio.h>
#include<math.h>


struct Rectangle {

	int length;
	int breadth;
};

//Pass structure by value function: if anything changes in rectangle in fun,
//nothing will be changed in rectangle defined in main function

void fun1(struct Rectangle r) {
	r.length = 20;
	printf("Length %d \nBreadth %d\n", r.length, r.breadth);
}

//Pass by address: every changes inside the fun function will be
//reflected in main function as well

void fun2(struct Rectangle* p) {
	p->length = 20;
	printf("Length %d \nBreadth %d\n", p->length, p->breadth);
	 
}

//this function will return a pointer of type rectangle in heap
struct Rectangle* fun3() {
	struct Rectangle* p;
	p = (struct Rectangle *)malloc(sizeof(struct Rectangle));
	p->length = 15;
	p->breadth = 7;

	return p;
}


int main() {
	//in C when we are declaring a struct it is mandatory to write keyword "struct"
	// but in C++ is not mandatory	

	//Don't forget to comment out one of functions to see how it works in main
	struct Rectangle r1 = { 10, 5 };
	printf("call function 1:\n");
	fun1(r1);

	printf("call function 2:\n");
	//fun2(&r1);

	printf("call main function:\n");
	printf("Length %d \nBreadth %d\n", r1.length, r1.breadth); 

	struct Rectangle* ptr = fun3();
	printf("print structure type rectangle:\n");
	printf("Length %d \nBreadth %d \n", ptr->length, ptr->breadth);
	return 0;
}