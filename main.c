/*
 *
 * main.c file to project
 *
 */

#include <stdio.h>

extern int printme(void);

int main(void){

	int i;
	i = (int)&main;
	printme();
	printf("i=%d\n",i);
	printme();
	return 0;
}

