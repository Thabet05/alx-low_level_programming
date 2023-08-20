#include <stdio.h>
/*
 * main - A program that prints the size of various types on the computer it is compiled and run on.
 * Return: 0 (Success)
 */
int main(void){
	char a;
	int b;
	long int c;
	long long int d;
	float e;
	printf("Size of a char: %d byte(s)\n", sizeof(a));
	printf("Size of an int: %d byt(e)s\n", sizeof(b));
	printf("Size of a long int: %d byte(s)\n", sizeof(c));
	printf("Size of a long long int: %d byte(s)\n", sizeof(d));
	printf("Size of a float: %d byte(s)\n", sizeof(e));
}
