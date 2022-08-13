#include "stdio.h"

#define Number 2
struct Sstudent{
	char name[20];
	int roll;
	int grade;
};
void ScanStudentarray(struct Sstudent student[], int number);
void printStudentarray(struct Sstudent student[], int number);

int main(){
	struct Sstudent student[Number] ;
	
	ScanStudentarray(student, Number);
	
	printStudentarray(student, Number);
	
	return 0;
}

void ScanStudentarray(struct Sstudent student[], int number){

	int i ;
	for(i = 0; i < number; i++){
		printf("Please enter student %d information:\n",(i+1));
		printf("enter student %d name:",(i+1));
		gets(student[i].name);
		printf("enter student %d roll:",(i+1));
		scanf("%d",&student[i].roll);
		printf("enter student %d grade:",(i+1));
		scanf("%d",&student[i].grade);
		printf("\n");
	}
}

void printStudentarray(struct Sstudent student[], int number){

	int i ;
	for(i = 0; i < number; i++){
		printf("displaying information of Student %d :\n",(i+1));
		printf("Student %d name : %s\n",(i+1) ,student[i].name);
		printf("Student %d roll : %d\n",(i+1) ,student[i].roll);
		printf("Student %d grade: %d\n",(i+1) ,student[i].grade);
	}
}