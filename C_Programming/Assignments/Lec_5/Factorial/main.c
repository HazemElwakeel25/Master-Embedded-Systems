

/*
 * main.c
 *
 *  Created on: 30 Jul 2022
 *      Author: Hazem_Khaled
 */

#include"stdio.h"
#include "math.h"

int Factorial_recursion(int x);

int main(){
	int number;
	printf("Please enter a positive number : ");
	scanf("%d", &number);
	printf("Factorial of %d is %d .", number, Factorial_recursion(number));

	return 0 ;
}
int Factorial_recursion(int x){
	int sum = x;
	if (x > 1){
		sum *=	Factorial_recursion(--x);

	}
	return sum;
}

