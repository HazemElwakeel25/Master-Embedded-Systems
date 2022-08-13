/*
 * main.c
 *
 *  Created on: 31 Jul 2022
 *      Author: Hazem_Khaled
 */

#include"stdio.h"
#include "string.h"

void Reverse_string_recursion(void);

int main(){

	printf("Please enter a string : ");
    Reverse_string_recursion();

	return 0 ;
}
void Reverse_string_recursion(void){
	char c;
	scanf("%c", &c);
	if ( c != '\n'){
		Reverse_string_recursion();
		printf("%c",c);
	}
}
