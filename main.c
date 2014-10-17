/*
 *
 * main.c file to project
 *
 */

#include <stdio.h>


int main(void){

	int i = 100;
	i = (int)&main;
	printf("i=%d\n",i);

	return 0;
}

