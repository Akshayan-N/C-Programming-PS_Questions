//To find the given input is alphabet or not 

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char letter;
    printf("Enter the letter : ");
    scanf("%c", &letter);

    if (isalpha(letter))
    {
        printf("Alphabet");
    }
    else
    {
        printf("Not A Alphabet");
    }
}