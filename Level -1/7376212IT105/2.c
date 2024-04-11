// 2.To find whether the given input is vowel or consonant(if letter) or invalid input(if numbers)

#include <stdio.h>
#include <ctype.h>
#define VOWELS_COUNT 5 
void main(void)
{
    char letter;
    char vowels[VOWELS_COUNT] = {'a', 'e', 'i', 'o', 'u'};
    printf("Provide Input : ");
    scanf("%c", &letter);
    letter = tolower(letter);
    
    if(isalpha(letter))
    {
        for (int i = 0; i < VOWELS_COUNT; i++)
        {
            if (letter == vowels[i])
            {
                printf("vowel");
                return;
            }
        }
        printf("consonant");
    }
    else if (isdigit(letter))
    {
        printf("number");
    }
    else
    {
        printf("Invaild Input");
    }
}
