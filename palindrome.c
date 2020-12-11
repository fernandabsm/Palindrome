#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* function that determines whether a number is a palindrome or not */
int palindrome(char* n)
{
    int i = 0, j;
    j = strlen(n) - 2;
    while (j > i)
    {
        if(n[i] == n[j])
        {
            i++;
            j--;
        }
        else
        {
            return 0;
        }
        
    }
    return 1;
}

int main()
{
    char n[30];
    int result;
    printf("Enter a number to see if it is a palindrome: \n");
    fgets(n, 30, stdin);
    result = palindrome(n);
    if(result == 1)
    {
        printf("This number is a palindrome.");
    }
    else
    {
        printf("This number is not a palindrome.");
    }
    
}
