#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[100];
    int string_len;
    int i = 0;
    printf("Enter string: ");
    fflush(stdout);
    fgets(str,100,stdin);
    string_len = strlen(str);
    for (i = 0 ; i < string_len/2 ; i++){
        str[i] ^= str[string_len - 1 - i];
        str[string_len - 1 - i] ^= str[i];
        str[i] ^= str[string_len - 1 - i];
    }
    printf("The reversed string: %s",str);
}
