#include "stdio.h"


struct SDistance{
	int feets;
	double inchs;
};

struct SDistance Sum (struct SDistance Dis1, struct SDistance Dis2);

int main(){
	struct SDistance Dis1;
	struct SDistance Dis2;
	struct SDistance sum;
	printf("Please fisrt Distance:\n");

	printf("enter Feet:");
	scanf("%d",&Dis1.feets);
	printf("enter inch:");
	scanf("%lf",&Dis1.inchs);
	printf("\n");
	
	printf("Please sec. Distance:\n");
	printf("enter Feet:");
	scanf("%d",&Dis2.feets);
	printf("enter inch:");
	scanf("%lf",&Dis2.inchs);
	printf("\n");
	
	sum = Sum(Dis1, Dis2);
	
	
	printf("The sum : %d \' %lf \"\n", sum.feets, sum.inchs);
	
	return 0;
}

struct SDistance Sum (struct SDistance Dis1, struct SDistance Dis2){
	struct SDistance sum;
	sum.feets = Dis1.feets + Dis2.feets;
	sum.inchs = Dis1.inchs + Dis2.inchs;
	
	if (sum.inchs > 12){
		sum.feets++;
		sum.inchs -= 12;
	}
	
	return sum;
}
