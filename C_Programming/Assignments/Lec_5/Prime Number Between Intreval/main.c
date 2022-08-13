/*
 * main.c
 *
 *  Created on: 29 Jul 2022
 *      Author: Hazem_Khaled
 */


/*
 * main.c
 *
 *  Created on: 30 Jul 2022
 *      Author: Hazem_Khaled
 */

#include"stdio.h"
#include "math.h"

void printprime(int x, int y);

int main(){
	int x, y;
	printf("Enter two number (intervals) : ");
	fflush(stdout);
	scanf("%d %d", &x, &y);

	if (x > y){
		printprime(y, x);
	}
	else{
		printprime(x, y);
	}


	return 0 ;
}
void printprime(int x, int y){
	int i , j, boundry;
	int flag = 0 ;
	printf("the prime between %d and %d : ", x, y);
	for (i = x; i <= y ; i++){
		if (i == 1 || (i%2) == 0){
			continue;
		}
		else if (i == 2){
			printf("%d  ",i);
			continue;
		}
		else {
			boundry = floor(sqrt(i));
			for(j = 3; j <= boundry; j++){
				if (i % j == 0){
					flag = 1;
					break;
				}
			}
			if (flag == 1){
				flag = 0;
				continue;
			}
			printf("%d  ",i);
		}
	}
}

