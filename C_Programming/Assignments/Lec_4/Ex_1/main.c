/*
 *
 * main.c
 *
 *  Created on: 28 May 2022
 *      Author: Hazem_Khaled
 */
#include "stdio.h"

int main(){
	float arr1[2][2] = {0};
	float arr2[2][2] = {0};
	int i, j;
	fflush(stdout);
	printf("Enter the elements of 1st matrix\n");
	for (i = 0 ; i < 2 ; i ++){
		for (j = 0; j < 2 ; j++){
			printf("Enter a%d%d :", (i+1),(j+1));
			fflush(stdout);
			scanf("%f", &arr1[i][j]);
		}
	}
	printf("Enter the elements of 2st matrix\n");
	for (i = 0 ; i < 2 ; i ++){
		for (j = 0; j < 2 ; j++){
			printf("Enter b%d%d :", (i+1),(j+1));
			fflush(stdout);
			scanf("%f", &arr2[i][j]);
		}
	}
	printf("The Sum is :\n");
	for (i = 0 ; i < 2 ; i ++){
			for (j = 0; j < 2 ; j++){
				printf("%f \t", (arr1[i][j] + arr2[i][j]));
			}
			printf("\n");
		}


	return 0;
}
