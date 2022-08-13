

/*
 * main.c
 *
 *  Created on: 30 Jul 2022
 *      Author: Hazem_Khaled
 */

#include"stdio.h"
#include "math.h"

int Power_recursion(int number , int base);

int main(){
	int base, number;
	printf("Please enter a number : ");
	scanf("%d", &number);
	printf("Please enter a base : ");
	scanf("%d", &base);
	printf("power of %d ^ %d = %d .", number, base, Power_recursion( number , base));

	return 0 ;
}
int Power_recursion(int number , int base){
	int power = number;
	if (base > 1){
		power *=	Power_recursion(number , --base);

	}
	return power;
}

