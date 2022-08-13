#include "stdio.h"


struct Sstudent{
	char name[20];
	int roll;
	int grade;
};

int main(){
	struct Sstudent student ;
	printf("Please enter student information:\n");
	printf("enter name:");
	scanf("%[^\n]s",student.name);
	printf("enter roll:");
	scanf("%d",&student.roll);
	printf("enter roll:");
	scanf("%d",&student.grade);
	
	printf("displaying information\n");
	printf("name : %s\n",student.name);
	printf("roll : %d\n",student.roll);
	printf("grade: %d\n",student.grade);
	
	return 0;
}
