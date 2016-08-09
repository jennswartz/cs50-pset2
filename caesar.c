#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main(int argc, string argv[])
{
    //  Check if command line input valid; if invalid, error out; if valid, get string to be encrypted
    if (argc != 2 || argv[1] == NULL)
    {
        printf("Invalid command line argument. Retry by adding one non-negative command line number.\n");
        return 1;
    }
    else
    printf("");
    string encrypt_me = GetString();
 
    //  Set key to value of argument given in the command line
    int key = atoi(argv[1]);

    // Assign ascii character to integer variables
    int upper_case = 'A';
    int lower_case = 'a';


    //  Create loop to check each character in string to be encrypted        
    for (int i = 0, n = strlen(encrypt_me); i < n; i++)
    {
        
        //  Check and encrypt upper-case values
        if(encrypt_me[i] >= 'A' && encrypt_me[i] <= 'Z')
            {
                printf("%c", (((encrypt_me[i] - upper_case) + key) % 26) + upper_case);
            }
    
        
        //  Check and encrypt lower-case values
        else if(encrypt_me[i] >= 'a' && encrypt_me[i] <= 'z')
             {
                 printf("%c", (((encrypt_me[i] - lower_case) + key) % 26) + lower_case);
             }
    
        //  Prints leftover values
        else if(encrypt_me[i])
            {
                printf("%c", encrypt_me[i]);
            }
    }
        printf("\n");
        return 0;
}