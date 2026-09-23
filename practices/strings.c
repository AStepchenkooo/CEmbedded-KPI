#include <stdio.h>
#include <string.h>

int main()
{
    char str[256];
    char result[256];
    int j = 0;
    printf("Enter your line:");
    fgets (str, sizeof(str), stdin);

    for(int i=1; i < strlen(str); i+=2){
        result[j]=str[i];
        j++;
    }

    result[j]='\0';
    printf("Result: %s\n", result);

    return 0;
}