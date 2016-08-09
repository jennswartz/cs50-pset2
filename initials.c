#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string name = GetString();
    char *tokenPtr;
    tokenPtr = strtok(name, " ");
    
    while(tokenPtr != NULL)
    {
        printf("%c", toupper(tokenPtr[0]));
        tokenPtr = strtok(NULL, " ");
    }
    printf("\n");
}