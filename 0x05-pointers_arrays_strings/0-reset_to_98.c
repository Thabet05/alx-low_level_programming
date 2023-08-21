#include <stdio.h>
/*
 * main - a function that takes a pointer to an int
 * as parameter and updates the value it points to to 98
 * Return: 0 (Success)
 */
int main(void){
	int n;
	int *p=&n;
	*p=98;
	return(0);
}
