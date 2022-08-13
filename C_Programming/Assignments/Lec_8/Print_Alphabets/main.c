#include "stdio.h"


int main(){
	char l = 'A';
	char* p = NULL;
	p = &l;
	int i;
	for (i=0; i < 26; i++){
		printf("%c ",(*p+i));
	}
	return 0;
}
