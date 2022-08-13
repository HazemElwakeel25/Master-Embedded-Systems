#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[100];
    char x;
    int i = 0, count = 0;
    printf("Enter string: ");
    fflush(stdout);
    fgets(str,100,stdin);
    fflush(stdout);
    printf("Enter character : ");
   x = getc(stdin);
    for (i = 0 ; i < strlen(str); i++){
        if (str[i] == x){
            count++;
        }
    }
    printf("The Number of characters %c : %d",x, count);
}
