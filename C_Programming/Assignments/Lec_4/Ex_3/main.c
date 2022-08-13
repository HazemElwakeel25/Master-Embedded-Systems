/*
 *
 * main.c
 *
 *  Created on: 26 JULY 2022
 *      Author: Hazem_Khaled
 */
#include "stdio.h"

int main(){
	float arr1[10][10];
	int n, k , i ,j;
	float temp;
	printf("Enter Rows and columns : ");
	fflush(stdout);
	scanf("%d %d", &n, &k);
	for (i = 0 ; i < n ; i ++){
		for (j = 0; j < k ; j++){
			printf("Enter a%d%d : ", (i+1),(j+1));
			fflush(stdout);
			scanf("%f", &arr1[i][j]);
		}
	}
	printf("The enterd matrix :\n");
	for (i = 0 ; i < n ; i ++){
			for (j = 0; j < k ; j++){
				printf("%f \t", arr1[i][j] );
			}
			printf("\n");
		}
	for (i = 0 ; i < n ; i ++){
		for (j = 0 + i; j < k ; j++){
			temp = arr1[i][j];
			arr1[i][j] = arr1[j][i];
			arr1[j][i] = temp;
		}
	}
	printf("The transpose is :\n");
	for (i = 0 ; i < k ; i ++){
			for (j = 0; j < n ; j++){
				printf("%f \t", arr1[i][j] );
			}
			printf("\n");
		}


}
